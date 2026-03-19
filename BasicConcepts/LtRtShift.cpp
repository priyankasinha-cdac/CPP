/** 
 * @brief program to demonstrate left and right shift operations. 
 * @param num the first integer
 * @param shift the number of positions to shift
*/

#include <iostream>
using namespace std;

int main() {
    int num, shift;

    // Input values for shift operations
    cout << "Enter the first integer: ";
    cin >> num;
    
    // Input the number of positions to shift
    cout<< "Enter the number of positions to shift: ";
    cin >> shift;

    // Perform shift operations
    cout << "Left Shift (num << " << shift << "): " << (num << shift) << endl;
    cout << "Right Shift (num >> " << shift << "): " << (num >> shift) << endl;

    return 0;
}