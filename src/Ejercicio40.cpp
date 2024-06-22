#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 25). A continuación ingresar un conjunto VEC de N componentes. 
Si la suma de las componentes resulta mayor que cero imprimir las de índice par, sino las de índice impar.*/

int main(){

    int n, sumaElementos=0;


    if(ValidarNum(0,25,n)){
        int vec[n];
        CargarArr(n,vec);

        for (int i = 0; i < n; ++i) {
            sumaElementos += vec[i];
        }  
        
        if (sumaElementos > 0)
        {
            for (int i = 0; i < n; i+=2) {
                cout << vec[i] << " ";
            }
        }else{
            for (int i = 1; i < n; i+=2) {
                cout << vec[i] << " ";
            }                
        }
    }
    return 0;
}