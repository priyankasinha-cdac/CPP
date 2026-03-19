#include<iostream>

using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;
    // a = 10, b=5; c=15;

    // Nested ternary operator
    int max = (a>b)?(a>c?a:c):(b>c?b:c);

    cout << "The maximum value is: " << max << endl;

    return 0;
}