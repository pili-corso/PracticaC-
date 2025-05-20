#include <iostream>
#include <iomanip>  // para setfill y setw
using namespace std;

int main() {
    int dia, mes, anio;

    cout << "Ingrese el dia (1-31): ";
    cin >> dia;

    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    cout << "Ingrese el anio (por ejemplo, 2025): ";
    cin >> anio;

    // Precondiciones: validación básica
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || anio < 1000 || anio > 9999) {
        cout << "Fecha no valida." << endl;
        return 1;
    }

    // Mostrar como AAAAMMDD
    cout << "Fecha en formato AAAAMMDD: ";
    cout << anio
        << setfill('0') << setw(2) << mes
        << setfill('0') << setw(2) << dia
        << endl;

    return 0;
}
