#include<iostream>
#define SIZE 5
using namespace std;

int arr[SIZE];
void get(int []);
void getEle();
void display();
int sum(int[]);
int max();
int min();

int main(){
    int a1[SIZE];
    get(a1);

    getEle();
    return 0;
}

void get(int a[]){
    cout<<"Enter "<<SIZE<<" elements: ";
    for(int i=0; i<SIZE; i++){
        cin>>a[i];
    }
    // return a;
}

void getEle(){
    cout<<"Enter "<<SIZE<<" elements: ";
    for(int i=0; i<SIZE; i++){
        cin>>arr[i];
    }
    // return arr;
}

void display(){
    cout<<"Elements are: ";
    for(int i=0; i<SIZE; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



r[i]