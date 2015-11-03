// Implementación y unit test de función alterna

#include <iostream>
#include <cassert>
using namespace std;

typedef unsigned int uint;

bool isVocal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Funcion alternaRec:
// Dado un string devuelve true si es una palabra alterna. Para lograr hacerlo
// de forma recursiva, hemos definido alternaRec así:
//
// alternaRec(st) = true, cuando es un string vacio
// alternaRec(st) = (tipo char en más reciente iteracion != ultimo char) AND
//                  alternaRec(st sin el último caracter)

bool alternaRec(const string &st, int last, bool vocal) {
    if (last < 0) return true;
    else 
        return (vocal != isVocal(st[last])  && alternaRec(st, last-1, !vocal));
}

bool alternaRec(const string &st) {
    return alternaRec(st, st.length()-2, isVocal(st[st.length()-1]) );
}

void test_alternaRec() {
    assert( alternaRec("elefante") == false);
    assert( alternaRec("e")        == true);
    assert( alternaRec("c")        == true);
    assert( alternaRec("burro")    == false);
    assert( alternaRec("apagon")   == true);
    cout << "Paso las pruebas!!!" << endl;
}

int main() {
    test_alternaRec();
    return 0;
}