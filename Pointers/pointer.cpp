/**
 * @brief Program to demonstrate the use of pointers in C++.
 * @details This program will show how to declare a pointer, assign it the address of a variable, and use it to access the value of that variable.
 * @param variable an integer variable that will store a value entered by the user
 * @param ptr a pointer to an integer variable that will store the address of the variable
 * @example Input: 10
 * @example Output: The value of the variable is: 10
 * @example The address of the variable is: 0x7ffee3bff5ac
 * @example The value accessed through the pointer is: 10
 */

#include <iostream>
using namespace std;

int main() {
    int variable;
    cout << "Enter an integer value: ";
    cin >> variable;

    // Declare a pointer and assign it the address of the variable
    int* ptr = &variable;

    // Display the value of the variable, its address
    cout << "The value of the variable is: " << variable << endl;
    cout << "The address of the variable is: " << &variable << endl;


    cout << "The value of the pointer is: " << ptr << endl;
    cout << "The value accessed through the pointer is: " << *ptr << endl;
    cout << "The address of the pointer itself is: " << &ptr << endl;

    return 0;
}