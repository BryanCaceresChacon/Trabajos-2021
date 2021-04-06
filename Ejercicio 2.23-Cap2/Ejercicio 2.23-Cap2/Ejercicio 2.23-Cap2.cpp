// Ejercicio 2.23-Cap2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    //EJERCICIO 2.23
    int d, e, f, g, h;
    cout << "EJERCICIO 2.23" << endl;
    cout << "Ingrese 5 numeros: ";
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    cin >> h;
    if ((d > e) and (d > f) and (d > g) and (d > h)) {
        cout << d << " es el mayor" << endl;
    }
    if ((e > d) and (e > f) and (e > g) and (e > h)) {
        cout << e << " es el mayor" << endl;
    }
    if ((f > d) and (f > e) and (f > g) and (f > h)) {
        cout << f << " es el mayor" << endl;
    }
    if ((g > d) and (g > e) and (g > f) and (g > h)) {
        cout << g << " es el mayor" << endl;
    }
    if ((h > d) and (h > e) and (h > g) and (h > f)) {
        cout << h << " es el mayor" << endl;
    }

    if ((f < d) and (f < e) and (f < g) and (f < h)) {
        cout << f << " es el menor" << endl;
    }
    if ((e < d) and (e < f) and (e < g) and (e < h)) {
        cout << e << " es el menor" << endl;
    }
    if ((g < d) and (g < f) and (g < e) and (g < h)) {
        cout << g << " es el menor" << endl;
    }
    if ((h < d) and (h < f) and (h < g) and (h < e)) {
        cout << h << " es el menor" << endl;
    }

    cout << endl;
}


