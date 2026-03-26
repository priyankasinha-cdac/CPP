#include<iostream>
using namespace std;
void fun(int ar[]){
    cout<<sizeof(ar)<<endl;
}
int main(){
    int arr[5];
    fun(arr);
    cout<<sizeof(arr);
    return 0;
}