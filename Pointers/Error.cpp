#include <iostream>
using namespace std;

int main() {
    int *ptr;   // not initialized
    *ptr = 10;  // dangerous
    return 0;
}