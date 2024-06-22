#include "../include/FuncionesBasicas.h"

/*Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual 
las mismas contengan los primeros números naturales pares e imprimirlo.*/


int main(){
    int n;
    
    if(ValidarNum(0,25,n))
    {
        int array[n];
        for (int i = 1; i <= n; i++)
        {
            array[i-1]=i*2;
        }
        cout<<"Los valores del array son: ";
        for (int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }    
    }

   return 0; 
}
