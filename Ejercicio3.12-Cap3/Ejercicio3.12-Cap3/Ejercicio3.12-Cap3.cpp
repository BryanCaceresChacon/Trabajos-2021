// Ejercicio3.12-Cap3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
using namespace std;


//EJERCICIO 3.12
class fecha {
private:
 
    int mes;
    int dia;
    int year;

public:
    fecha(int,int,int);
    void displayDate();

};
fecha::fecha(int _dia, int _mes, int _year) {//Constructor
    mes = _mes;
    dia = _dia;
    year = _year;

};
void fecha::displayDate() {
    
    if ((mes != 0) and (mes < 13)) {
        cout << "La fecha es: " << dia << "/" << mes << "/" << year << endl;
    }
    if((mes == 0) or ( mes > 12)) {
        cout << "La fecha es: " << dia << "/" << 1 << "/" << year << endl;
    }
    
}
int main()
{

    fecha F1 = fecha(26,8,2000);//Creando objeto M1
    F1.displayDate();
}





