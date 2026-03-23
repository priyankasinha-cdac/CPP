#include<iostream>

using namespace std;

int main()
{
    int n, sum=0;
    cout << "Enter the number of terms: ";
    cin >> n;

    for(int i=n;i>=0; i--){
        sum = sum + i;
    }
    
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}