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

class C : public B{
    private:
        void Cdispprivate(){cout<<"C Private"<<endl;}
    protected:
        void Cdispprotected(){cout<<"C Protected"<<endl;}
    public:
        void Cdisppublic(){cout<<"C Public"<<endl;}
};

int main(){
    A a;
    B b;
    C c;
    a.Adisppublic();
    b.Bdisppublic();
    b.Adisppublic();
    c.Cdisppublic();
    c.Bdisppublic();
    c.Adisppublic();
    return 0;
}