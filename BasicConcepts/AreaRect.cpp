/** 
 * @brief program to calculate the area of a rectangle. 
 * @param length the length of the rectangle
 * @param width the width of the rectangle
*/

#include <iostream>
using namespace std;

int main() {
    double length, width;

    // Input values for length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate area using the formula A = length * width
    double area = length * width;

    // Output the area of the rectangle
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}