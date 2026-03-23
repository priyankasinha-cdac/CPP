#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int* ptr = arr; // ptr points to the first element of the array

    // cout<<*ptr<<endl; // Output: 10
    // cout<<*ptr+1<<endl;
    // cout<<*(ptr+1)<<endl;

    cout<<"*ptr++: "<<*ptr++<<endl; // Output: 10, ptr now points to the second element
    cout<<"*ptr: "<<*ptr<<endl; // Output: 20
    cout<<"*++ptr: "<<*++ptr<<endl; // Output: 30, ptr now points to the third element
    cout<<"*ptr: "<<*ptr<<endl; // Output: 30
    cout<<"++*ptr: "<<++*ptr<<endl; // Output: 30, ptr now points to the fourth element
    cout << endl;

    cout<<"Array elements: "<<endl;
    for(int i=0; i<5; i++){
        cout << arr[i]<< " "; 
    }
    cout << endl;

    return 0;
}