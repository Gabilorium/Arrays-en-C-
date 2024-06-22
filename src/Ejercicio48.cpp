#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 40). Luego ingresar un conjunto REFER de N elementos reales (ingresan ordenados por magnitud creciente). 
Finalmente ingresar un valor pesquisa X. Desarrollar el programa que determine e imprima:
a) Con cual elemento (posición) del conjunto coincide, o
b) Entre cuales dos elementos (posiciones) se encuentra, o
c) Si es menor que el primero o mayor que el último.*/

int main(){
    int n;
    if(ValidarNum(0,40,n)){
        float refer[n], x;
        CargarArr(n,refer);
        QuickSort(refer,0,n-1);
        cout<<"Ingrese el valor a buscar"<<endl;
        cin>>x;
        int resBusqueda;
        resBusqueda=BuscarEnArr(n,refer,x);
        if(resBusqueda !=-1){
            cout<<"Se encontro el valor en la posición: "<<resBusqueda+1<<" con el ID="<<resBusqueda<<endl;
        }else{
            int posMayor=0;           
            while (posMayor < n && refer[posMayor] < x) {
                posMayor++;
            }
            if(posMayor == 0){
                cout<<"El valor es menor que el primer elemento del array"<<endl;
            }else if(posMayor == n){
                cout<<"El valor es mayor que el último elemento del array"<<endl;
            }else{
                cout<<"El valor se encuentra entre el elemento en la posición: "<<posMayor<<" y el elemento en la posición: "<<posMayor+1<<endl;
            }
        }
    }
    
    return 0;
}