// Problemas-Capitulo3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
//EJERCICIO 3.9
using namespace std;
class Account {

public:

    // Constructor de cuenta con dos parámetros
    Account(std::string accountName, int initialBalance)
        : name{ accountName } { // asigna el nombre de la cuenta al nombre del miembro de datos
        // valida que el balance inicial es mayor que 0; si no,

        // el saldo del miembro de datos mantiene su valor inicial predeterminado de 0
        if (initialBalance > 0) { // si el balance inicial es válido
            balance = initialBalance;  // asignarlo al saldo del miembro de datos
        }
    }
    // función que deposita (agrega) solo una cantidad válida al saldo
    void deposit(int depositAmount) {
        if (depositAmount > 0) { // si el depositAmount es válido
            balance = balance + depositAmount; // agregarlo al saldo
        }
    }
    //FUNCION AGREGADA
    // función que retira solo una cantidad válida al saldo
    void retirar(int retiromonto) {
        if (retiromonto > 0) {
            balance = balance - retiromonto;
        }
        else {
            std::cout << "el monto del retiro excedió el saldo de la cuenta";
        }
    }
    // función devuelve el saldo de la cuenta
    int getBalance() const {
        return balance;
    }

    // función que establece el nombre

    void setName(std::string accountName) {
        name = accountName;
    }

    // función que devuelve el nombre
    std::string getName() const {
        return name;
    }

private:
    std::string name; // miembro de datos de nombre de cuenta
    int balance{ 0 }; // miembro de datos con valor inicial predeterminado
};
int main()
{
    Account account1{ "Jane Green", 50 };
    Account account2{ "John Blue", -7 };

    // muestra el saldo inicial de cada objeto
    cout << "cuenta1: " << account1.getName() << " el saldo es $"
        << account1.getBalance();
        
    cout << "\ncuenta2" << account2.getName() << " el saldo es $"
        << account2.getBalance();
        
    cout << "\n\nIngrese el monto del depósito para la cuenta 1: "; // rápido
    int depositAmount;
    cin >> depositAmount;// obtener la entrada del usuario
    cout << "agregando " << depositAmount << " saldo de la cuenta1";
    account1.deposit(depositAmount); // agregar al saldo de la cuenta1

    cout << "\n\nIngrese el monto de retiro para la cuenta 1: "; 
    int retiromonto;
    cin >> retiromonto;// obtener la entrada del usuario
    cout << "retirando " << retiromonto << " saldo de la cuenta1";
    account1.retirar(retiromonto); // retirar saldo de la cuenta1

// mostrar saldos
    cout << "\n\ncuenta1: " << account1.getName() << " el saldo es $"
        << account1.getBalance();
    cout << "\ncuenta2: " << account2.getName() << " el saldo es $"
        << account2.getBalance();
    cout << "\n\nIngrese el monto del depósito para la cuenta 2: "; // rápido
    cin >> depositAmount; // obtener la entrada del usuario
    cout << "agregando " << depositAmount << " saldo de la cuenta2";
    account2.deposit(depositAmount); // agregar al saldo de la cuenta2

    cout << "\n\nIngrese el monto de retiro para la cuenta 2: ";
    
    cin >> retiromonto;// obtener la entrada del usuario
    cout << "retirando " << retiromonto << " saldo de la cuenta1";
    account2.retirar(retiromonto); // retirar saldo de la cuenta1
    // mostrar saldos
    cout << "\n\ncuenta1: " << account1.getName() << " el saldo es $"
        << account1.getBalance();
    cout << "\ncuenta2: " << account2.getName() << " el saldo es $"
        << account2.getBalance() << endl;
   

}
        




