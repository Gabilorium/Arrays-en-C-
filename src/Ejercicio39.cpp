#include "../include/FuncionesBasicas.h"


/*Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes. 
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento homólogo de VEC. 
Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón
Nota: El programa principal puede tener un máximo de 6 instrucciones.
*/


double Factorial(double num){
    double result = 1;
    for (int i = 1; i <= num; i++)
    { 
        result *= i; 
    }
    return result;
}

void ImprimirArrays(int&n, int vec[], double fact[]){

    if(ValidarNum(0,20,n)){    
        CargarArr(n,vec);

        cout<<"Los valores del vecay(vec) igualados a su factorial respectivamente son: "<<endl;
        for (int i = 0; i < n; i++)
        {
            fact[i] = Factorial(vec[i]);
            cout<<vec[i]<<"="<<fact[i]<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Ingrese un numero den 1 al 20: ";
    cin>> n;
    int vec[n];
    double fact[n];//Uso double por si algun elemento del vector es muy grande :)
    ImprimirArrays(n,vec,fact);

   return 0; 
}
