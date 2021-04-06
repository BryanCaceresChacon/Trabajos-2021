// Ejercicio 2.29-Cap2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    //EJERCICIO 2.29
    int m, n, q, o, p;

    cout << "EJERCICIO 2.29" << endl;
    m = 0;
    n = 1;
    q = 2;
    o = 3;
    p = 4;
    cout << "Longitud de la cara del cubo: " << "\tSuperficie del cubo" << "\tVolumen del cubo" << endl;
    cout << "\t" << m << "\t\t\t\t   " << m * m * 6 << "\t\t\t  " << m * m * m << endl;
    cout << "\t" << n << "\t\t\t\t   " << n * n * 6 << "\t\t\t  " << n * n * n << endl;
    cout << "\t" << q << "\t\t\t\t   " << q * q * 6 << "\t\t\t  " << q * q * q << endl;
    cout << "\t" << o << "\t\t\t\t   " << o * o * 6 << "\t\t\t  " << o * o * o << endl;
    cout << "\t" << p << "\t\t\t\t   " << p * p * 6 << "\t\t\t  " << p * p * p << endl;

    cout << endl;
}


