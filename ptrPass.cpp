#include <iostream>
using namespace std;

typedef unsigned int uint;



void swapIt(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapIt(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int main() {
    int x = 5, y = 7;
    
    swapIt(x, y);
    
    cout << x << " " << y << endl;
    
    return 0;
}