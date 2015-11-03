#include <iostream>
using namespace std;

typedef unsigned int uint;

uint fact(uint n) {
    return ( n * fact(n-1) );
}

int main() {
    cout << fact(4) << endl;
    return 0;
}