#include<iostream>
using namespace std;

inline int add5(int n){
    return n+5;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = add5(n);
    cout<<"Result is: "<<result<<endl;
    return 0;
}