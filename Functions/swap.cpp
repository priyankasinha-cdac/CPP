#include<iostream>
using namespace std;

void swap_cbv(int, int);
void swap_cbr(int&, int&);
void swap_cba(int*, int*);


int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    cout<<"Before swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    //Call by Value
    swap_cbv(a, b);

    //Call by reference
    swap_cbr(a,b);

    //call by address
    swap_cba(&a, &b);

    return 0;
}

void swap_cbv(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"After swapping (Call by Value): "<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
}

void swap_cbr(int &x, int &y){//int &x=a, int &y=b; //if a=7 b=5 ;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"After swapping (Call by Reference): "<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
}

void swap_cba(int *x, int *y){//int *x=&a, int *y=&b; //a=7 b=5;
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout<<"After swapping (Call by Address): "<<endl;
    cout<<"x: "<<*x<<endl;
    cout<<"y: "<<*y<<endl;
}