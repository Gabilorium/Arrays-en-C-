#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B ambos de N elementos. 
¨Generar un arreglo C donde cada elemento se forme de la siguiente forma:
C[1] <-- A[1]+B[N]	C[2] <-- A[2]+B[N-1]	..........................	C[N] <-- A[N]+B[1]*/

int main(){
    int n;
    if(ValidarNum(0,40,n)){
        int a[n], b[n], c[n];
        cout<<"Ingrese el conjunto A: "<<endl;
        CargarArr(n,a);
        cout<<"Ingrese el conjunto B: "<<endl;
        CargarArr(n,b);
        for(int i=0; i < n; i++){
            cout<<"c"<<i<<" = "<< a[i]<< " + " <<b[(n-1)-i]<<" = "<< a[i] + b[(n-1)-i]<<endl;
            c[i] = a[i] + b[(n-1)-i];
        }
        cout<<"El array C es: ";
        MostrarArr(n,c);
    }

    return 0; 
}