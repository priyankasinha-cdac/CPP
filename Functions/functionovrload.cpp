#include<iostream>
using namespace std;

int fn(int a, int b, int c, int d=30, int e=20){}
int fn(int a=1, int b=2, int c=3, int d=4, int e=5){}

void swap(int a, int b=10) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    cout<<"Before swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    swap(a);

    cout<<"After swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    return 0;
}


