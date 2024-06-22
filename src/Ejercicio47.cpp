#include "../include/FuncionesBasicas.h"

/*Ingresar dos valores enteros M (< 25) y N (< 10) A continuación ingresar un conjunto A de M elementos y luego otro B de N elementos, 
ambos ordenados en forma creciente por magnitud. Generar e imprimir el conjunto TOTAL resultante del apareo por magnitud de los conjuntos A y B.*/

void Apareo(int m, int n, int a[], int b[], int total[]){
    int i=0,j=0,k=0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            total[k++] = a[i++];
        } else {
            total[k++] = b[j++];
        }
    }
    //Si quedan elementos en A, agregarlos a TOTAL
    while (i < m) {
        total[k++] = a[i++];
    }
    //Si quedan elementos en B, agregarlos a TOTAL
    while (j < n) {
        total[k++] = b[j++];
    }
}

void ChechearSort(int m, int a[]){
    int aCopia[m];
    CopiarArr(m,a,aCopia);
    cout<<"Elementos del conjunto A ordenados con bubble"<<endl;
    BubbleSort(m,a);
    MostrarArr(m,a);
    cout<<"Elementos del conjunto A ordenados con Quick"<<endl;
    QuickSort(aCopia,0,m-1);
    MostrarArr(m,aCopia);
}

int main(){

    int m=5, n, i, j, k = 0;

    cout<<"Primero ingrese el valor de 'N' y luego el de 'M'"<<endl;
    if(ValidarNum(0,10,n)&&ValidarNum(0,25,m)){
        int a[m], b[n], total[m+n];
        cout<<"Ingrese los elementos del conjunto A"<<endl;
        CargarArr(m,a);
        QuickSort(a,0,m-1);
        cout<<"Ingrese los elementos del conjunto B"<<endl;
        CargarArr(n,b);
        QuickSort(b,0,n-1);
        Apareo(m,n,a,b,total);
        cout << "El conjunto TOTAL resultante del apareo es:" << endl;
        MostrarArr(m+n,total);
    }

    return 0;
}