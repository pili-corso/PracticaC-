#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Primera parte: quinta parte
    float quintaParte = numero / 5.0;

    // Segunda parte: resto
    int resto = numero % 5;

    // Tercera parte: tercera parte de la quinta parte
    float terceraParte = quintaParte / 3.0;

    cout << "\nResultados:\n";
    cout << "Quinta parte: " << quintaParte << endl;
    cout << "Resto de dividir por 5: " << resto << endl;
    cout << "Tercera parte de la quinta parte: " << terceraParte << endl;

    return 0;
}
