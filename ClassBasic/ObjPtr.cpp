#include<iostream>
using namespace std;

class Demo{
    private:
        int i;
    public:
        void display(){ cout<<"i="<<i<<endl;}
        void init(){
            cout<<"Enter i:";
            cin>>i;
        }
};

int main(){
    Demo dobj;
    Demo *doptr;
    doptr = &dobj;
    Demo * doptr1 = new Demo;//garbage value i=-123;
    Demo * doptr1 = new Demo(); //zero init i=0

    dobj.init();
    doptr->init();
}
