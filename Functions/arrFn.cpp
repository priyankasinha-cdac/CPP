#include<iostream>
using namespace std;
//int arr[5];//arr->2000-2020

int* getArray(){
    int arr[5];
    cout<<"Enter 5 elements: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    return arr;
}

void fn(int a1[]){
   cout<<"Enter 5 elements: "<<endl;
    for(int i=0; i<5; i++){
        cin>>a1[i];
    } 
}


int main()
{
    int *arr=getArray();
    cout<<"The elements of the array are: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    int a1[5];
    fn(a1);

    return 0;
}