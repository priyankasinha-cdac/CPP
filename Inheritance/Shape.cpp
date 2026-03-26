#include<iostream>
using namespace std;

typedef float type;

class Shape{
    protected:
        type area, circumference;
    public:
        void display(){
            cout<<"Area="<<area<<endl;
            cout<<"circumference="<<circumference;
        }
};

class Circle : public Shape{
    protected:
        const float pi = 3.142;
        type radius;

    public:
        Circle(type radius){
            this->radius = radius;
        }
        void calcParameters(){
            area=pi*radius*radius;
            circumference=2*pi*radius;
        }
};

int main(){
    Circle c(5);
    c.calcParameters();
    c.display();
    return 0;
}