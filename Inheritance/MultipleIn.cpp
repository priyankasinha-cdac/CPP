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

class B{
    private:
        void Bdispprivate(){cout<<"B Private"<<endl;}
    protected:
        void Bdispprotected(){cout<<"B Protected"<<endl;}
    public:
        void Bdisppublic(){cout<<"B Public"<<endl;}
};

class C : private A, public B{
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
    a.Adisppublic();
    b.Bdisppublic();
    C c;
    c.Cdisppublic();
    c.Bdisppublic();
    return 0;
}