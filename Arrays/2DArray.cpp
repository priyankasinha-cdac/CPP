/** 
 * @brief program to demonstrate the use of two-dimensional arrays in C++. 
 * @param arr a 2D array of integers
 * @param ROWS the number of rows in the matrix
 * @param COLS the number of columns in the matrix
 */

#include <iostream>
using namespace std;

int main(){
    int a1[2][3] = {1,2,3,4,5,6};
    int a2[2][3] = {{1,2,3},{4,5,6}};
    int a3[2][3] = {{1,2},{4}};
    int a4[][2] = {1,2,3,4,5,6,7,8};
    
    
    int arr[2][3];
    // Run time memory allocation for 2D array
    cout << "Enter values for a 2D array (2 rows and 3 columns):" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    //display elements of the 2D array
    cout << "The elements of the 2D array are:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}