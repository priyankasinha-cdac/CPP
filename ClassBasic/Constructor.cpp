#include<iostream>
using namespace std;

class Demo{
    private:
        int i;
    public:
        Demo(){
            i = 0;
        }
        Demo(int x){
            i = x;
        }
        Demo(Demo &d){
            cout<<"copy constructor";
            i = d.i;//d4.i
            this->i=d.i;
        }
        ~Demo(){
            i = -123;
            display();
            cout<<"Object is deallocated";
        }
        
        void display(){ cout<<"i="<<i<<endl;}
};


int main(){
    Demo d1;
    Demo d2(5);
    Demo d3 = d1;
    Demo d4(d2);//d4.Demo(d2)
    d4 = d3;


    return 0;
}
