/** 
 * @brief program to reverse a number. 
 * @param num the integer to reverse
 */

#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    // Input an integer to reverse
    cout << "Enter an integer: ";
    cin >> num;

    // Reverse the number using a loop
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Output the reversed number
    cout << "The reversed number is: " << reversedNum << endl;

    return 0;
}