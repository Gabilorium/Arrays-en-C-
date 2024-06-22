#include "../include/FuncionesBasicas.h"

/*Ingresar dos valores enteros M (< 10) y N (< 15). 
A continuación ingresar un conjunto A de M elementos y luego otro B de N elementos. 
Generar e imprimir:
a) Un conjunto C resultante de la anexión de A y B    b) Un conjunto D resultante de la anexión de los elementos distintos de cero de A y B.*/

void GenerarConjuntoC(int m, int n, int a[], int b[], int c[]){
    int k = 0;
    for (int i = 0; i < (m+n); i++)
    {
        if(i<m){
            c[i] = a[i];
        }else{
            c[i] = b[k++];
           
        }
    }
}

void GenerarConjuntoD(int m, int n, int a[], int b[], int d[], int& tamanioD){
int k = 0; // Índice para el arreglo d

    for (int i = 0; i < m; i++) {
        if (a[i] != 0) {
            d[k++] = a[i]; 
        }
    }

    for (int i = 0; i < n; i++) {
        if (b[i] != 0) {
            d[k++] = b[i]; 
        }
    }

    tamanioD = k;
}

int main(){

    int m, n;

    cout<<"Primero ingrese el valor de 'N' y luego el de 'M'"<<endl;
    if(ValidarNum(0,15,n)&&ValidarNum(0,10,m)){
        int a[m], b[n], c[m+n], d[m+n], tamanioD;
        cout<<"Ingrese los elementos del conjunto A:"<<endl;
        CargarArr(m,a);
        cout<<"Ingrese los elementos del conjunto B:"<<endl;
        CargarArr(n,b);
        GenerarConjuntoC(m,n,a,b,c);
        cout<<"Conjunto C: ";
        MostrarArr(m+n,c);
        GenerarConjuntoD(m,n,a,b,d,tamanioD);
        cout<<"Conjunto D: ";
        MostrarArr(tamanioD,d);
    }

    return 0;
}