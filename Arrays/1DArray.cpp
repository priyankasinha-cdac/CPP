#include<iostream>
#define MAX_SIZE 10

using namespace std;

int main(){
    int const n = 5;
    int ar[n];
    int arr[5] = {1,4,3,2,5}; // declaration and initialization of an array
    int b[5] = {1,2}; // declaration and partial initialization of an array, remaining elements will be initialized to 0
    int c[] = {3,4,5}; // declaration and initialization of an array without specifying size, size will be determined by the number of elements
    int d[MAX_SIZE]; // declaration of an array without initialization, elements will be initialized to garbage values

    for(int i=0; i<n; i++){
        cin>>ar[i]; // reading values from user for the array elements
    }

    cout<<endl;

    //displaying the values of the arrays
    cout<<"The numbers in arr are: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The numbers in array b are: ";
    for(int i=0; i<5; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<"The numbers in array c are: ";
    for(int i=0; i<3; i++){     
        cout<<c[i]<<" ";
    }
    cout<<endl;

    cout<<"The numbers in array d are: ";
    for(int i=0; i<MAX_SIZE; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;


    return 0;
}