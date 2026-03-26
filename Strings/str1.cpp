#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, fullName;
    cout << "Enter short name: ";
    cin >> name;

    cin.ignore();  // to clear the buffer - to be used when getline is called after cin

    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Short: " << name << endl;
    cout << "Full: " << fullName;

    return 0;
}