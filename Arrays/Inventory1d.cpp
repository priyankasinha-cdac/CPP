/**
 * @brief To store prices of items in an inventory using a 1D array.
 * @param inventory An array to hold the prices of items.
 * @param size The size of the inventory array.
 */

#include <iostream>
#define SIZE 10

using namespace std;

int main(){
    int inventory[SIZE];

    // Input prices of items in the inventory
    cout << "Enter the prices of " << SIZE << " items in the inventory:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> inventory[i];
    }

    // Display the prices of items in the inventory
    cout << "\nPrices of items in the inventory:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Item " << i + 1 << ": Rs " << inventory[i] << endl;
    }

    //Most and Least expensive items in the inventory
    int maxPrice = inventory[0];
    int minPrice = inventory[0];

    for (int i=1; i< SIZE; i++){
        if(minPrice > inventory[i]){
            minPrice = inventory[i];
        }
        if(inventory[i]> maxPrice){
            maxPrice = inventory[i];
        }       
    }
    cout << "\nMost expensive item price: Rs " << maxPrice << endl;
    cout << "Least expensive item price: Rs " << minPrice << endl;

    // Calculate the average price of items in the inventory
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum = sum + inventory[i];
    }
    float avg = sum / SIZE;
    cout << "Average price of items in the inventory: Rs " << avg << endl;
    
    // Count how many items cost more than ₹500
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (inventory[i] > 500) {
            count++;
        }
    }
    cout << "Number of items costing more than Rs 500: " << count << endl;

    // Sort the inventory prices in ascending order using bubble sort
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (inventory[j] > inventory[j + 1]) {
                // Swap inventory[j] and inventory[j + 1]
                int temp = inventory[j];
                inventory[j] = inventory[j + 1];
                inventory[j + 1] = temp;
            }
        }
    }

    // Display the prices of items in the inventory
    cout << "\nPrices of items in the inventory:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Item " << i + 1 << ": Rs " << inventory[i] << endl;
    }
    
    return 0;

}