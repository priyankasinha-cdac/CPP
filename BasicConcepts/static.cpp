#include <iostream>
using namespace std;
int count = 0;
void inc() {
static int x = 0;
x++;
count++;
if(x < 3) inc();
cout << x << " ";
}
int main() {
inc();
cout << count;
}