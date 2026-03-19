/** 
 * @brief program to swap two numbers using a temporary variable. 
 * @param n1 the first number
 * @param n2 the second number
*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2, temp;

    // Input values for swapping
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    // Swapping using a temporary variable
    temp = n1; // Store the value of n1 in temp
    n1 = n2;   // Assign the value of n2 to n1
    n2 = temp; // Assign the value stored in temp (original n1) to n2

    // Output the swapped values
    cout << "After swapping:" << endl;
    cout << "First number: " << n1 << endl;
    cout << "Second number: " << n2 << endl;

    return 0;
}