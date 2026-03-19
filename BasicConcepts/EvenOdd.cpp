/**
 * @brief Compute whether a number is even or odd.
 * @param num the integer to check for even or odd
 */

#include <iostream>
using namespace std;

int main() {
    int num;

    // Input an integer
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is even or odd using modulus operator
    (num % 2 == 0) ? cout << num << " is an even number." << endl : cout << num << " is an odd number." << endl;

    return 0;
}