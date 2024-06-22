#include "../include/FuncionesBasicas.h"

/*Ingresar un valor entero CANT (< 50) y a continuación un conjunto SINOR de CANT elementos. Desarrollar un programa que determine e imprima:
a) El conjunto SINOR en el que cada elemento original se intercambie por su simétrico:
A[1] con A[CANT], A[2] con A[N-1], ..... etc.
b) El conjunto SINOR ordenado de menor a mayor sobre si mismo indicando la posición que ocupaba cada elemento en el conjunto original.*/

int main(){
    int cant, ret;
    if(ValidarNum(0,50,cant)){
        int sinorOriginal[cant], sinorCambiado[cant];
        CargarArr(cant,sinorOriginal);
        for (int i = 0; i < cant; i++) {
            sinorCambiado[i] = sinorOriginal[(cant-1)-i];
        }
        cout<<"sino cambiado simetricamente: ";
        MostrarArr(cant,sinorCambiado);
        QuickSort(sinorCambiado,0,cant-1);
        cout<<"sino ordenado de menor a mayor: ";
        MostrarArr(cant,sinorCambiado);
        for (int i = 0; i < cant; i++)
        {
            ret=BuscarEnArr(cant,sinorOriginal,sinorCambiado[i]);
            if(ret!=-1){
                cout<<"El elemento "<<sinorCambiado[i]<<" estaba en la posicion "<<ret<<endl;
            }
        }
        
    }
    return 0;
}