// Palindromo(Iterativa).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int palindromo(int arr[], int tam) {
    for (int i = 0; i <= tam; i++) {
        if (arr[i] == arr[tam - 1]) {
           
            tam--;
            system("cls");
            cout << "Es palindromo";
        }
        else {
            system("cls");
            cout << "No es palindromo";
            break;
        }
    }
    return 0;
}
int main()
{
    int arr[6] = { 1,2,3,3,2,1 };
    palindromo(arr, 6);
}


