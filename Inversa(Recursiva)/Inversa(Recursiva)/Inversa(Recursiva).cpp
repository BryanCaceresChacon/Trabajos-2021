// Inversa(Recursiva).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void intercambio(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void inversa(int arra[], int tam, int b = 0) {
   
    
        
        if (b >= tam-1) {
            return;
            }
        intercambio(arra[b], arra[tam-1]);
        
        inversa(arra, --tam, ++b);

            

}

int main()
{
    int arra[8] = { 1,2,3,4,5,6,7,8 };
    inversa(arra, 8);
    
}


