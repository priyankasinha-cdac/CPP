/**
 * @brief Define a Product class (id, name, price, quantity). 
 * @brief Store 10 products in an array and display those with quantity below a threshold.
 */

#include <iostream>
using namespace std;

class Product {
    private:
        int id;
        char name[100];
        double price;
        int quantity;
    public:
        void getProduct(){
            cout << "Enter product id: ";
            cin >> id;
            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter product price: ";
            cin >> price;
            cout << "Enter product quantity: ";
            cin >> quantity;
        
        }

        void displayThreshold(int threshold){
            if(quantity < threshold){
                cout<<"Id: "<<id;
                cout<<"Name: "<<name;
                cout<<"Price: "<<price;
                cout<<"Quantity: "<<quantity;
            }
        }
};

int main(){
    Product products[10];
    for(int i = 0; i < 10; i++){
        cout << "Enter details for product " << i + 1 << endl;
        products[i].getProduct();
    }
    int threshold;
    cout << "Enter quantity threshold: ";
    cin >> threshold;
    cout << "Products with quantity below " << threshold << ":" << endl;
    for(int i=0; i<10; i++){
        products[i].displayThreshold(threshold);
    }
    return 0;
}