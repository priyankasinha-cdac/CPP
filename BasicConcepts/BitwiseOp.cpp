/** 
 * @brief program to demonstrate bitwise operations. 
 * @param n1 the first integer
 * @param n2 the second integer
*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input values for bitwise operations
    cout << "Enter the first integer: ";
    cin >> n1;
    cout << "Enter the second integer: ";
    cin >> n2;

    // Perform bitwise operations
    cout << "Bitwise AND (n1 & n2): " << (n1 & n2) << endl;
    cout << "Bitwise OR (n1 | n2): " << (n1 | n2) << endl;
    cout << "Bitwise XOR (n1 ^ n2): " << (n1 ^ n2) << endl;

    return 0;
}