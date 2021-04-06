// Problemas-Capitulo2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    //EJERCICIO 2.17:
    cout << "EJERCICIO 2.17" << endl;
    string v;
    string x;
    string y;
    string z;
    v = "v";
    x = "x";
    y = "y";
    z = "z";
    //A)
    cout << v + x <<","<<y + z<<endl;
    //b)
    cout << v + x + y + z << "," << z + y + x + v << "," << x + y + z + v << "," << y + v + x + z << endl;
    //c)
    cout << v + x + y + z;
    cout << endl;
    cout << endl;
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
        cout << "el mayor es: " << a<<endl;
    }
    else if (b > a and b > c) {
        cout << "el mayor es: " << b<<endl;
    }
    else if (c > b and c > a) {
        cout << "el mayor es: " << c <<endl;
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

    //EJERCICIO 2.21
    cout << "EJERCICIO 2.21" << endl;
    cout << "\tccc" <<"\t +"<< "\t   +" << endl;
    cout << "       c" <<"\t +"<< "\t   +" << endl;
    cout << "      c" <<"\t       +++++" << "\t +++++" << endl;
    cout << "       c" << "\t +" << "\t   +" << endl;
    cout << "\tccc" << "\t +" << "\t   +" << endl;

    cout << endl;

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
    //EJERCICIO 2.25
    int i, j, k;
   
    cout << "EJERCICIO 2.25" << endl;
    cout << "Ingres 3 numeros: ";
    cin >> i;
    cin >> j;
    cin >> k;
    if (j % i == 0) {
        cout << "Los dos primeross numeros son factores del segundo" << endl;
    }
    else {
        cout << "el primer numero no es factor del segundo" << endl;
    }
    cout << endl;

    //EJERCICIO 2.27
    char l;
    int num;
    cout << "EJERCICIO 2.27" << endl;
    cout << "Ingrese un caracter: ";
    cin >> l;
    num = l;
    cout << "Su caracter en valor entero es: " << num;
    cout << endl;
    cout << endl;
    
    //EJERCICIO 2.29
    int m,n,q,o,p;

    cout << "EJERCICIO 2.29" << endl;
    m = 0;
    n = 1;
    q= 2;
    o = 3;
    p = 4;
    cout << "Longitud de la cara del cubo: " << "\tSuperficie del cubo" << "\tVolumen del cubo" << endl;
    cout << "\t" << m << "\t\t\t\t   " << m * m * 6 << "\t\t\t  " << m * m * m << endl;
    cout << "\t" << n << "\t\t\t\t   " << n * n * 6 << "\t\t\t  " << n * n * n << endl;
    cout << "\t" << q << "\t\t\t\t   " << q * q * 6 << "\t\t\t  " << q * q * q << endl;
    cout << "\t" << o << "\t\t\t\t   " << o * o * 6 << "\t\t\t  " << o * o * o << endl;
    cout << "\t" << p << "\t\t\t\t   " << p * p * 6 << "\t\t\t  " << p * p * p << endl;

    cout << endl;
    //EJERCICIO 2.31
    int Tmillas;
    int Cgasolina;
    int Pmillas;
    int Estacionamiento;
    int Peajes;

    cout << "Ejercicio 2.31" << endl;
    cout << "Usuario1" << endl;
    cout << "Ingrese el total de millas recorridas por día: ";
    cin >> Tmillas;
    cout << "Ingrese el costo por galón de gasolina: ";
    cin >> Cgasolina;
    cout << "Ingrese el promedio de millas por galón ";
    cin >> Pmillas;
    cout << "Ingrese las tarifas de estacionamiento por día ";
    cin >> Estacionamiento;
    cout << "Ingrese los peajes por día ";
    cin >> Peajes;

    cout << "El costo del usuario1 por día de conducción al trabajo es: " << Tmillas + Cgasolina + Pmillas + Estacionamiento + Peajes << endl;
}

