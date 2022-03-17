
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int numerosACalcular;
    cout << "Secuencia de fibonacci" << endl;
    cout << "Ingrese la cantidad de numeros que desea" << endl;
    cin >> numerosACalcular;
    cout << a << endl << b << endl;
    for (int i = 3; i <= numerosACalcular; i++) {
        cout << a + b << endl;
        b = a + b;
        a = b - a;
    }
}
