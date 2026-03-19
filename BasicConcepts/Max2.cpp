/** 
 * @brief program to find the maximum of two numbers. 
 * @param n1 the first number
 * @param n2 the second number
 */

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input values for comparison
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    // Find the maximum using a conditional statement
    int max = (n1 > n2) ? n1 : n2;

    // Output the maximum value
    cout << "The maximum of " << n1 << " and " << n2 << " is: " << max << endl;

    return 0;
}