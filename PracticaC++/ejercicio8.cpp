/*
* #include <iostream>
using namespace std;

int main() {
    int fecha;

    cout << "Ingrese la fecha en formato AAAAMMDD (ej: 20250405): ";
    cin >> fecha;

    // Validar que tiene 8 dígitos
    if (fecha < 10000000 || fecha > 99999999) {
        cout << "El numero ingresado no tiene 8 digitos." << endl;
        return 1;
    }

    // Descomposición
    int anio = fecha / 10000;           // primeros 4 dígitos
    int mes = (fecha / 100) % 100;      // 2 dígitos del medio
    int dia = fecha % 100;              // últimos 2 dígitos

    // Validación básica de mes y día
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        cout << "La fecha no es valida." << endl;
        return 1;
    }

    cout << "Anio: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;

    return 0;
}

*/