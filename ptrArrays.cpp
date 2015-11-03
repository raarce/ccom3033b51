#include <iostream>
using namespace std;

typedef unsigned int uint;

void fah() {
    int n;
    cin >> n;
    int A[n];
    int b = 5;
    
    cout << "a:" << &n << endl;
    cout << "A:" << A << endl;
    cout << "b:" << &b << endl;
    fah();
}

int foo() {
    int n;
    cin >> n;
    int A[n];
    int b = 5;
    
    cout << "a:" << &n << endl;
    cout << "A:" << A << endl;
    cout << "b:" << &b << endl;
    fah();
}
int main() {
    int n;
    cin >> n;
    int A[n];
    int b = 5;
    
    cout << "a:" << &n << endl;
    cout << "A:" << A << endl;
    cout << "b:" << &b << endl;

    foo();
    return 0;
}