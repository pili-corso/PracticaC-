/*
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero de 5 digitos: ";
    cin >> numero;

    // Verificamos que tenga 5 digitos
    if (numero < 10000 || numero > 99999) {
        cout << "El numero ingresado no tiene 5 digitos." << endl;
        return 1;
    }

    // Separar digitos usando division entera y modulo
    int dig1 = numero / 10000;
    int dig2 = (numero / 1000) % 10;
    int dig3 = (numero / 100) % 10;
    int dig4 = (numero / 10) % 10;
    int dig5 = numero % 10;

    cout << "Los digitos son:\n";
    cout << dig1 << endl;
    cout << dig2 << endl;
    cout << dig3 << endl;
    cout << dig4 << endl;
    cout << dig5 << endl;

    return 0;
}
*/
