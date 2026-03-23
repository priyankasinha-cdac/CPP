/**
 * @brief Find the index of all the vowels in a given string.
 * @param str The input string.
 * @example Input: "hello world"
 * @example Output: 1, 4, 7
 */

#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main() {
    char str[MAX_SIZE];
    cout << "Enter a string: ";
    // cin>> str;
    cin.getline(str, MAX_SIZE); // To read the entire line including spaces
    cout << "The index of all the vowels in the string are: ";
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            cout << i << " ";
        }
    }
    
    
    cout << endl;
    return 0;
}