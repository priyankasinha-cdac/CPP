#include<iostream>
using namespace std;

class Demo
{
    private:
        int privatei;
        void privatedisplay(){}
    protected:
        int protectedi;
        void protecteddisplay(){}  
    public:
        int publici;
        void publicdisplay(){
            cout<<"in class"<<endl;          
        }
};

void Demo:: publicdisplay(){
    cout<<"out of class";

}

int main()
{
    int i;
    Demo d;
    Demo *ptr= new Demo[5];
    d.publicdisplay();
    return 0;
}

