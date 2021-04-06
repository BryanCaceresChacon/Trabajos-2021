// Ejercicio 3.11-Cap3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>


using namespace std;
//EJERCICIO 3.11
class motorVehicle {
private:
    string marca;
    string combustible;
    int fecha;
    string color;
    int capacidadMotor;

public:
    motorVehicle(string, string, int, string, int);
    void displayCarDetails();

};
motorVehicle::motorVehicle(string _marca, string _combustible, int _fecha, string _color, int _capacidadMotor) {//Constructor
    marca = _marca;
    combustible = _combustible;
    fecha = _fecha;
    color = _color;
    capacidadMotor = _capacidadMotor;

};
void motorVehicle::displayCarDetails() {
    cout << "La marca del vehiculo es: "<<marca <<endl;
    cout << "El tipo de combustible es: "<<combustible <<endl;
    cout << "La fecha de fabricacion es: "<<fecha <<endl;
    cout << "El color es: "<<color <<endl;
    cout << "La capacidad del motor es: "<<capacidadMotor <<endl;
}
int main()
{
    
    motorVehicle M1 = motorVehicle("Kia", "GLP", 2000, "Negro", 2000);//Creando objeto M1
    M1.displayCarDetails();
}

