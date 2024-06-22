#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos. 
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a razón de:
a) Uno por línea	b) Diez por línea	c) Cinco por línea con identificación*/

void UnoPorLinea(int n, int arr[]){
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << endl;
    }
}

void DiezPorLinea(int n, int arr[]){
    int cont = 0;
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << ", ";
        cont++;
        if(cont == 10){
            cout << endl;
            cont = 0;
        }
    }
}

void CincoPorLineaConId(int n, int arr[]){
    int cont = 0;
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << " con id: "<< i <<", ";
        cont++;
        if(cont == 5){
            cout << endl;
            cont = 0;
        }
    }
}

int main(){

    int n;
    if (ValidarNum(0,25,n))
    {
        int gg[n],tipoResolucion;
        CargarArr(n,gg);
        cout << "Ingrese 1 para mostrar uno por linea"<<endl;
        cout << "Ingrese 2 para mostrar diez por linea"<<endl;
        cout << "Ingrese 3 para mostrar cinco por linea con identificacion"<<endl;
        cin >> tipoResolucion;
        switch (tipoResolucion)
        {
        case 1:
            UnoPorLinea(n,gg);
            break;        
        case 2:
            DiezPorLinea(n,gg);
            break;
        case 3:
            CincoPorLineaConId(n,gg);
        break;
        
        default:
            cout << "Opcion no valida";
            break;
        }
    }
    

    return 0;
}