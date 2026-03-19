/**
 * @brief Program to print a right triangle pattern using asterisks (*).
 * The pattern will have a specified number of rows, and each row will contain an increasing number of asterisks.
 * @param rows the number of rows in the right triangle pattern
 * @example 
 * Input: rows = 5
 * Output:
 * *
 * **
 * ***
 * ****
 * *****
 */

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the right triangle pattern: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}