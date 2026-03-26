#include<iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout<<"Base Class Function"<<endl;
        }
};

class Derived : public Base{
    public:
        void display(){
            cout<<"Derived Class Function"<<endl;
        }
};

int main(){
    Base obase;
    Derived oderived;

    Base *opbase;
    Derived *opderived;
    
    opderived = &oderived;
    opderived->display();

    opbase = &obase;
    opbase->display();//from class

    opbase = &oderived;
    opbase->display();

    return 0;
}