/** 
 * @brief program to manage bank transactions using arrays. 
 * @param transactions an array of bank transactions for 12 months
 * @param SIZE the size of the transactions array = 12 for 12 months
*/

#include <iostream>
#define SIZE 12
using namespace std;

int main() {
    double transactions[SIZE];

    // Input transactions for each month
    cout << "Enter the bank transactions for each month:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Month " << (i + 1) << ": ";
        cin >> transactions[i];
    }

    // net balance at end of year
    double netBalance = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        netBalance += transactions[i];
    }
    cout << "Net Balance at the end of the year: " << netBalance << endl;
    
    // month with highest credit and highest debit
    double highestCredit = transactions[0];
    double highestDebit = transactions[0];
    int highestCreditMonth = 1;
    int highestDebitMonth = 1;

    for (int i = 1; i < SIZE; i++) {
        if (transactions[i] > highestCredit) {
            highestCredit = transactions[i];
            highestCreditMonth = i + 1;
        }
        if (transactions[i] < highestDebit) {
            highestDebit = transactions[i];
            highestDebitMonth = i + 1;
        }
    }
    cout << "Month with highest credit: " << highestCreditMonth << " (" << highestCredit << ")" << endl;
    cout << "Month with highest debit: " << highestDebitMonth << " (" << highestDebit << ")" << endl;

    // the number of credit and debit transactions
    int creditCount = 0;
    int debitCount = 0;

    for (int i = 0; i < SIZE; i++) {
        if (transactions[i] > 0) {
            creditCount++;
        } else if (transactions[i] < 0) {
            debitCount++;
        }
    }
    cout << "Number of credit transactions: " << creditCount << endl;
    cout << "Number of debit transactions: " << debitCount << endl;

    // all months where the transaction was a debit
    cout << "Months with debit transactions: ";
    for (int i = 0; i < SIZE; i++) {
        if (transactions[i] < 0) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;

    return 0;
}