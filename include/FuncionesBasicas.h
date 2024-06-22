#pragma once
#ifndef FUNCIONESBASICAS_H
#define FUNCIONESBASICAS_H

#include <iostream> // Asegúrate de incluir iostream para usar cout y cin
using namespace std;

template <typename N>
bool ValidarNum(N min, N max, N& num){
    bool ret = false;
    cout << "Ingrese un valor (<"<<max<<"): ";
    cin >> num;
    while (num < min || num > max)
    {
        cout << "EL VALOR TIENE QUE ESTAR ENTRE " << min << " Y " << max << ": ";
        cin >> num;
    }
    ret = true;
    return ret;
}

template <typename S>
void CambioDeVariable(S& a, S& b){
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>
void CargarArr(int tamanio, T arr[]){
    for (int i = 0; i < tamanio; i++) {
        cout << "Ingrese el valor " << i + 1 << " del array: ";
        cin >> arr[i];
    }
}

template <typename T>
void MostrarArr(int tamanio, T arr[]){
    for (int i = 0; i < tamanio; i++) {
        cout << arr[i] << " ";
        if(i==(tamanio-1)){
            cout << endl;
        }
    }
}

template <typename T>
void CopiarArr(int tamanio, T arrOriginal[], T arrCopia[]){
    for (int i = 0; i < tamanio; i++) {
        arrCopia[i] = arrOriginal[i];
    }
}

template <typename T>
int BuscarEnArr(int tamanio, T arr[], T valorABuscar){
    int i=0; 
    while(i<tamanio && (arr[i]!= valorABuscar)){ 
      i++; 
    } 
   return i<tamanio?i:-1;
}

template <typename T>
void BubbleSort(int tamanio, T arr[]){
        for (int i = 0; i < tamanio - 1; i++) {
        for (int j = 0; j < tamanio - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                CambioDeVariable(arr[j], arr[j + 1]);
            }
        }
    }
}

//Low es el índice inicial del segmento del arreglo que se está ordenando. Inicialmente, es el índice del primer elemento del arreglo o de la sublista.
//High es el índice final del segmento del arreglo que se está ordenando. Inicialmente, es el índice del último elemento del arreglo o de la sublista.
template <typename T>
int Particion(T arr[], int low, int high) {
    int pivote = arr[high];  //Elegimos el último elemento como pivote
    int i = low - 1;  //Índice del elemento más pequeño

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivote) {
            i++; 
            CambioDeVariable(arr[i], arr[j]);
        }
    }
    CambioDeVariable(arr[i + 1], arr[high]);
    return i + 1;
}

template <typename T>
void QuickSort(T arr[], int low, int high) {
    if (low < high) {
        //piv es el índice de partición, arr[pi] está ahora en la posición correcta
        int piv = Particion(arr, low, high);

        //Ordenamos recursivamente los elementos antes y después de la partición
        QuickSort(arr, low, piv - 1);
        QuickSort(arr, piv + 1, high);
    }
}

#endif // FUNCIONESBASICAS_H