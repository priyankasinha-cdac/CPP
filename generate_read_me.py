"""
generate_readme.py
------------------
Auto-generates README.md from repo.json and Doxygen comments in .cpp files.

Usage:
    python generate_readme.py

Run this whenever repo.json is edited. The script will:
  1. Read repo.json for folder/file structure
  2. Parse each .cpp file for Doxygen tags (@brief, @author, @version, @note)
  3. Emit a card-based README.md

Place this script at the ROOT of your C++ repo alongside repo.json.
Expected layout:
    project-root/
    ├── repo.json
    ├── generate_readme.py
    ├── BasicConcepts/
    │   ├── Hello.cpp
    │   └── ...
    ├── Patterns/
    └── Arrays/
"""

import json
import os
import re
from datetime import datetime


# ── Config ────────────────────────────────────────────────────────────────────

JSON_FILE   = "repo.json"
OUTPUT_FILE = "README.md"
REPO_NAME   = "C++ Programs"
REPO_DESC   = "A collection of C++ programs organized by topic."


# ── Doxygen parser ────────────────────────────────────────────────────────────

def parse_doxygen(filepath: str) -> dict:
    """
    Reads a .cpp file and extracts Doxygen comment tags.

    Supports both block comments (/** ... */) and line comments (///).
    Returns a dict with keys: brief, author, version, note, param, returns.
    """
    tags = {
        "brief":   "",
        "author":  "",
        "version": "",
        "note":    "",
        "param":   [],
        "returns": "",
    }

    if not os.path.exists(filepath):
        return tags

    with open(filepath, "r", encoding="utf-8") as f:
        content = f.read()

    # Extract block Doxygen comments: /** ... */
    block_comments = re.findall(r'/\*\*.*?\*/', content, re.DOTALL)

    # Extract line Doxygen comments: /// text
    line_comments = re.findall(r'///+\s*(.*)', content)

    raw_lines = []

    for block in block_comments:
        # Strip leading * from each line inside the block
        for line in block.splitlines():
            line = re.sub(r'^\s*\*+\s?', '', line).strip()
            if line.startswith('/') or not line:
                continue
            raw_lines.append(line)

    for line in line_comments:
        raw_lines.append(line.strip())

    # Parse @tag value pairs
    for line in raw_lines:
        if line.startswith('@brief'):
            tags["brief"] = line[len('@brief'):].strip()
        elif line.startswith('@author'):
            tags["author"] = line[len('@author'):].strip()
        elif line.startswith('@version'):
            tags["version"] = line[len('@version'):].strip()
        elif line.startswith('@note'):
            tags["note"] = line[len('@note'):].strip()
        elif line.startswith('@param'):
            tags["param"].append(line[len('@param'):].strip())
        elif line.startswith('@return'):
            tags["returns"] = line[len('@return'):].strip()
        elif not any(line.startswith(f'@{t}') for t in
                     ['brief','author','version','note','param','return','see',
                      'throws','example','deprecated','todo','date']):
            # Plain description line (no tag) — append to brief if brief is empty
            if not tags["brief"] and not line.startswith('@'):
                tags["brief"] = line

    return tags


# ── Card builder ──────────────────────────────────────────────────────────────

FOLDER_ICONS = {
    "BasicConcepts": "📦",
    "Patterns":      "🔷",
    "Arrays":        "🗃️",
    "Strings":       "🔤",
    "Functions":     "⚙️",
    "Pointers":      "📌",
    "OOP":           "🧱",
    "Sorting":       "🔢",
    "Searching":     "🔍",
    "FileHandling":  "📂",
}

def get_icon(folder_name: str) -> str:
    clean = folder_name.strip("/")
    return FOLDER_ICONS.get(clean, "📁")


def build_file_card(base_path: str, folder: str, file_info: dict) -> str:
    """Builds a single markdown card for one .cpp file."""
    name        = file_info["name"].lstrip("/")        # e.g. Hello.cpp
    objective   = file_info.get("objective", "")
    filepath    = os.path.join(base_path, folder.strip("/"), name)
    dox         = parse_doxygen(filepath)

    # Prefer Doxygen @brief over JSON objective if available
    description = dox["brief"] if dox["brief"] else objective

    file_path_display = f"{folder}/{name}"

    lines = []
    lines.append(f"#### `{name}`")
    lines.append("")
    lines.append(f"> {description}")
    lines.append("")

    # Metadata row
    meta = []
    if dox["author"]:
        meta.append(f"**Author:** {dox['author']}")
    if dox["version"]:
        meta.append(f"**Version:** {dox['version']}")
    meta.append(f"**File:** `{file_path_display}`")

    if meta:
        lines.append("  ".join(meta))
        lines.append("")

    # Note
    if dox["note"]:
        lines.append(f"💡 *{dox['note']}*")
        lines.append("")

    # Params
    if dox["param"]:
        lines.append("**Parameters:**")
        for p in dox["param"]:
            lines.append(f"- `{p}`")
        lines.append("")

    # Returns
    if dox["returns"]:
        lines.append(f"**Returns:** {dox['returns']}")
        lines.append("")

    lines.append("---")
    lines.append("")
    return "\n".join(lines)


def build_folder_section(base_path: str, folder_data: dict) -> str:
    """Builds a folder section with all its file cards."""
    folder     = folder_data["folder"]
    files      = folder_data["files"]
    icon       = get_icon(folder)
    clean_name = folder.strip("/")
    count      = len(files)

    lines = []
    lines.append(f"## {icon} {clean_name}")
    lines.append("")
    lines.append(f"*{count} program{'s' if count != 1 else ''}*")
    lines.append("")

    for file_info in files:
        lines.append(build_file_card(base_path, clean_name, file_info))

    return "\n".join(lines)


# ── Summary table ─────────────────────────────────────────────────────────────

def build_summary_table(data: list) -> str:
    """Builds a quick-reference table of all files."""
    lines = []
    lines.append("## 📋 Quick Reference")
    lines.append("")
    lines.append("| Folder | File | Objective |")
    lines.append("|--------|------|-----------|")

    for folder_data in data:
        folder = folder_data["folder"].strip("/")
        for f in folder_data["files"]:
            name      = f["name"].lstrip("/")
            objective = f.get("objective", "")
            lines.append(f"| `{folder}` | `{name}` | {objective} |")

    lines.append("")
    return "\n".join(lines)


# ── Stats badges ──────────────────────────────────────────────────────────────

def build_stats(data: list) -> str:
    total_folders = len(data)
    total_files   = sum(len(fd["files"]) for fd in data)

    lines = []
    lines.append(
        f"![Folders](https://img.shields.io/badge/Folders-{total_folders}-blue) "
        f"![Programs](https://img.shields.io/badge/Programs-{total_files}-green) "
        f"![Language](https://img.shields.io/badge/Language-C%2B%2B-orange)"
    )
    lines.append("")
    return "\n".join(lines)


# ── Main generator ────────────────────────────────────────────────────────────

def generate_readme(base_path: str = "."):
    json_path = os.path.join(base_path, JSON_FILE)

    if not os.path.exists(json_path):
        print(f"[ERROR] {JSON_FILE} not found at: {json_path}")
        return

    with open(json_path, "r", encoding="utf-8") as f:
        repo = json.load(f)

    data = repo.get("filedata", [])

    sections = []

    # ── Header
    sections.append(f"# {REPO_NAME}")
    sections.append("")
    sections.append(REPO_DESC)
    sections.append("")
    sections.append(build_stats(data))

    # ── Quick reference table
    sections.append(build_summary_table(data))

    # ── Divider
    sections.append("---")
    sections.append("")
    sections.append("## 📁 Programs by Folder")
    sections.append("")

    # ── Each folder section
    for folder_data in data:
        sections.append(build_folder_section(base_path, folder_data))

    # ── Footer
    generated_at = datetime.now().strftime("%Y-%m-%d %H:%M")
    sections.append("")
    sections.append("---")
    sections.append("")
    sections.append(
        f"*README auto-generated on {generated_at} "
        f"from `{JSON_FILE}` and Doxygen comments.*"
    )

    readme_content = "\n".join(sections)

    out_path = os.path.join(base_path, OUTPUT_FILE)
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(readme_content)

    total = sum(len(fd["files"]) for fd in data)
    print(f"[OK] README.md generated — {len(data)} folders, {total} files.")
    print(f"     Saved to: {out_path}")


# ── Entry point ───────────────────────────────────────────────────────────────

if __name__ == "__main__":
    # Run from repo root, or pass a different base path here
    generate_readme(base_path="D:\PS-Sessions\Programs\CPP")