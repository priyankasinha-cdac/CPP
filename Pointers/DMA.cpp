#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate an array of integers
    int* arr = new int[size];

    // Check if memory allocation was successful
    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit with an error code
    }

    // Input values into the array
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display the values in the array
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
