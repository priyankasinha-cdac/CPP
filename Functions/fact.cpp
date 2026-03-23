#include<iostream>
using namespace std;

int factorial(int n=-1){
    int fact = 1;
    for(int i=0; i<n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int fact =factorial(n);
    int fact = factorial();
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}