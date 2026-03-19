/**
 * @brief Compound Interest Calculation
 * @param principal the initial amount of money invested or loaned
 * @param rate the annual interest rate (in percentage)
 * @param time the time the money is invested or borrowed for, in years
 * @param n the number of times that interest is compounded per year
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double principal, rate, time;
    int n;

    // Input values for compound interest calculation
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> n;

    // Convert annual interest rate from percentage to decimal
    double r = rate / 100;

    // Calculate compound interest using the formula A = P(1 + r/n)^(nt)
    double ci = principal * pow((1 + r / n), (n * time)) - principal;

    // Output the compound interest
    cout << "The compound interest after " << time << " years is: " << ci << endl;

    return 0;
}