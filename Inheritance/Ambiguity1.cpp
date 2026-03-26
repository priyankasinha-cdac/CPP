#include<iostream>

using namespace std;

class A{
    private:
        void dispprivate(){cout<<"A Private"<<endl;}
    protected:
        void dispprotected(){cout<<"A Protected"<<endl;}
    public:
        void disppublic(){cout<<"A Public"<<endl;}
};

class B : public A{
    private:
        void dispprivate(){cout<<"B Private"<<endl;}
    protected:
        void dispprotected(){cout<<"B Protected"<<endl;}
    public:
        void disppublic(){cout<<"B Public"<<endl;}
};

int main(){
    A a;
    B b;
    a.disppublic();
    b.disppublic();
    b.disppublic();
    return 0;
}