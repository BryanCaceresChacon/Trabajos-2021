// Palindromo(Recursivo).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int palindromo(int arr[], int tam, int i = 0) {

        if (arr[i] != arr[tam - 1]) {

            
           
            cout << "No es palindromo";
            return 0;
           
            

        }
        else if (i >= tam) {
            cout << "Es palindromo";
            return 1;
        }
        else {
            
            
            return palindromo(arr, --tam, ++i);
            
        }
    
    
    
}
int main()
{
    int arr[6] = { 1,2,3,3,2,1 };
    palindromo(arr, 6);
}


