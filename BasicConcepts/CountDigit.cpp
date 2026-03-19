#include<iostream>
using namespace std;

int main()
{
    int n, counter=0;
    cout << "Enter a positive integer: ";
    cin >> n;//12345

    for(;n>0;n=n/10){
        counter++;
        //n = n/10;
    }

    cout << "The number of digits is: " << counter << endl;
    return 0;
}