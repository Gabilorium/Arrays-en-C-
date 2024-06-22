#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. 
Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás.*/
double Factorial(double num){
    double result = 1;
    for (int i = 1; i <= num; i++)
    { 
        result *= i; 
    }
    return result;
}

int main(){
    int n;
    
    if(ValidarNum(0,30,n)){
        int array[n];
        CargarArr(n,array);
        int ultimoElemento = array[n - 1];
        for (int i = 0; i < n; ++i) {
            if (ultimoElemento < 10)
            {
                if (array[i] < 0) {
                    cout << array[i] << " ";
                }
            }else{
                if (array[i] >= 0) {
                    cout << array[i] << " ";
                }
            }

        }
    }
    return 0;
}