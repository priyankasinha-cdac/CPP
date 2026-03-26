#include<iostream>

using namespace std;

class A{
    private:
        void Adispprivate(){cout<<"A Private"<<endl;}
    protected:
        void Adispprotected(){cout<<"A Protected"<<endl;}
    public:
        void Adisppublic(){cout<<"A Public"<<endl;}
};

class B : public A{
    private:
        void Bdispprivate(){cout<<"B Private"<<endl;}
    protected:
        void Bdispprotected(){cout<<"B Protected"<<endl;}
    public:
        void Bdisppublic(){cout<<"B Public"<<endl;}
};

int main(){
    A a;
    B b;
    a.Adisppublic();
    b.Bdisppublic();
    b.Adisppublic();
    return 0;
}