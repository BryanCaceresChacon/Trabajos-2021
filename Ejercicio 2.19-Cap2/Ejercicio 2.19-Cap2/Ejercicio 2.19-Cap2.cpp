// Ejercicio 2.19-Cap2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    //EJERCICIO 2.19:
    int a, b, c;
    cout << "EJERCICIO 2.19" << endl;
    cout << "Ingrese 3 numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "La suma es:" << a + b + c << endl;
    cout << "El promedio es: " << (a + b + c) / 3 << endl;
    cout << "El producto es: " << a * b * c << endl;
    if (a > b and a > c) {
        cout << "el mayor es: " << a << endl;
    }
    else if (b > a and b > c) {
        cout << "el mayor es: " << b << endl;
    }
    else if (c > b and c > a) {
        cout << "el mayor es: " << c << endl;
    }
    if (a < b and a < c) {
        cout << "el menor es: " << a << endl;
    }
    else if (b < a and b < c) {
        cout << "el menor es: " << b << endl;
    }
    else if (c < b and c < a) {
        cout << "el menor es: " << c << endl;
    }
    cout << endl;
}

