// resultado se supone se 100K pero da 100958

// si cambias d a 0.25 entonces el resultado da exactamente 250000

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c = 0.0;
    double d = 0.2;
    for (unsigned long int i = 0; i < 10000000; i++) {
        c += d;
    }
    cout << fixed << c << endl;
    return 0;
}