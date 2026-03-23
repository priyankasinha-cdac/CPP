#include<iostream>
using namespace std;

int max3(int , int, int);
float max3(float , float, float);
char max3(char , char, char);


int main(){
    int ia,ib,ic, imax;
    float fa,fb,fc, fmax;
    char ca,cb,cc, cmax;
    cout<<"Enter three integer numbers: ";
    cin>>ia>>ib>>ic;
    imax = max3(ia,ib,ic);
    cout<<"Enter three float numbers: ";
    cin>>fa>>fb>>fc;
    fmax = max3(fa,fb,fc);
    cout<<"Enter three characters: ";
    cin>>ca>>cb>>cc;
    cmax = max3(ca,cb,cc);

    cout<<"Maximum integer: "<<imax<<endl;
    cout<<"Maximum float: "<<fmax<<endl;
    cout<<"Maximum character: "<<cmax<<endl;

    return 0;
}

int max3(int a, int b, int c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}

char max3(char a, char b, char c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}

float max3(float a, float b, float c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}
