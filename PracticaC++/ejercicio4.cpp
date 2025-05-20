#include <iostream>
#include <cmath>  // para usar M_PI
using namespace std;

int main() {
    float radio, pi;
    pi = 3,141592;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    float diametro = 2 * radio;
    float circunferencia = 2 * pi * radio;
    float area = pi * pow(radio, 2); // también se puede usar radio * radio

    cout << "\nResultados:\n";
    cout << "Diametro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Area: " << area << endl;

    return 0;
}
