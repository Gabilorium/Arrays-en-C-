#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos. 
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. 
Si el máximo no es único, imprimir todas las posiciones en que se encuentra. Defina dos estrategias para:
        a) Recorrer VALOR dos veces	                b) Recorrer VALOR una sola vez*/

void RecorrerArrUnaVez(int n, int arr[], int valMax, int posValMax){
    for (int i = 0; i < n; i++)
    {
        if(valMax  <arr[i]){
            valMax = arr[i];
            posValMax = i;
        }
    }
    cout << "Valor maximo: " << valMax << endl;
    cout << "Posicion del valor maximo: " << posValMax << endl;
        
}
void RecorrerArrDosVeces(int n, int arr[], int valMax, int posValMax){
    for (int i = 0; i < n; i++)
    {
        if(valMax<arr[i]){
            valMax = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == valMax){
            posValMax = i;
        }
    }
    
    cout << "Valor maximo: " << valMax << endl;
    cout << "Posicion del valor maximo: " << posValMax << endl;
}


int main(){
    int n, tipoResolucion;
    if (ValidarNum(0,40,n))
    {
        int arr[n];
        CargarArr(n,arr);
        int valMax = arr[0];
        int posValMax = 0;
        cout << "Ingrese 1 para resolverlo recoriendo 1 vez el arreglo"<<endl;
        cout<< "2 para resolverlo recoriendo 2 veces el arreglo "<<endl;
        cin >> tipoResolucion;
        switch (tipoResolucion)
        {
        case 1:
            RecorrerArrUnaVez(n,arr, valMax, posValMax);
            break;        
        case 2:
            RecorrerArrDosVeces(n,arr, valMax, posValMax);
            break;
        
        default:
            cout << "Opcion no valida";
            break;
        }
    }
    
    return 0;
}

