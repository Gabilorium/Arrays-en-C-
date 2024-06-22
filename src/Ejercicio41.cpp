#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro conjunto DOS, ambos de N componentes.
Generar e imprimir otro conjunto TRES intercalando los valores de posición impar de DOS y los valores de posición par de UNO.
Diseñar un procedimiento que rellene un arreglo en posiciones salteadas con las componentes de otro y usarlo para cada conjunto.*/

int RellenarArraySalteado(int tamanio, int arr[], int destino[], bool esPar){
    /*Otra opcion:;
        for (int i  0 i < tamanio; i+=2)
        {
            if (i%2==0){
                destino[i] = uno[i];
            }else{
                destino[i] = dos[i];
            }
            
        }
    */
    for (int i = esPar ? 0 : 1; i < tamanio; i+=2)
    {
        destino[i] = arr[i];//*Rellena los index pares
    }
    return destino[tamanio];
}

int main(){

    int n;
    if (ValidarNum(0,30,n))
    {
        int uno[n], dos[n], tres[n];
        CargarArr(n,uno);
        CargarArr(n,dos);

        tres[n]=RellenarArraySalteado(n, uno, tres, true);
        tres[n]=RellenarArraySalteado(n, dos, tres, false);
        cout << "Los valores del array 3 son: "<<endl;
        for (int i = 0; i < n; i++){
            cout<< tres[i] << " ";
        }
    }
    return 0;
}