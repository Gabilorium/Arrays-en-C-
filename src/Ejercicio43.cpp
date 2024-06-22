#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos. 
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor valor 
de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). 
Imprimir el conjunto MEJORDATO con identificación.*/

int main(){

    int n;

    if(ValidarNum(0,15,n)){
        int dato[n], max1=0,max2=0;
        CargarArr(n,dato);
        for (int i = 0; i < n; i++)
        {
            if (dato[i] > max1)
            {
                max2=max1;
                max1 = dato[i];
            }else if(dato[i] > max2){
                max2 = dato[i];
            }
        }
        int mejorDato[2]={max1, max2};
        for (int i = 0; i < size(mejorDato); i++)
        {
            cout<<"MejorDato "<<i+1<<" con id: "<<i<<" es:"<<mejorDato[i]<<endl;
        }
        
    }
    
    return 0;
}