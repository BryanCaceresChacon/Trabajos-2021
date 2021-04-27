// Inversa(Iterativa).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void inversa(int arra[], int tam) {
    int max = tam - 1;
    for (int b = 0; b <= tam; b++) {
        int v;
       
        v = arra[b];
        arra[b] = arra[tam - 1];
        arra[tam - 1] = v;
     
        tam--;
        
    }
    for (int h = 0; h <= max; h++) {
        cout << arra[h] << " ";
    }
    

}
int main()
{
    int arra[8] = { 1,2,3,4,5,6,7,8 };
    inversa(arra, 8);
}


