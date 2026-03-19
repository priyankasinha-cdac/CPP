#include<iostream>
using namespace std;

int main()
{
    int n, factorial=1;
    cout << "Enter a positive integer: ";// 5! = 5*4*3*2*1 = 120
    cin >> n;

    for(int i=n; i>0; i--){
        factorial = factorial * i;
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;
}