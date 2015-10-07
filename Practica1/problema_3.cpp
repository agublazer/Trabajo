#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int t= 4000000;

int *lista;

void crearLista()
{
    lista = new int [t];
    for(int i=0;i<t;i++)
        lista[i]= rand()%100+1;

}

int divide(int *array, int inicio, int fin) {
    int izquierda;
    int derecha;
    int pivot;
    int temp;

    pivot = array[inicio];
    izquierda = inicio;
    derecha = fin;

    while (izquierda < derecha) {
        while (array[derecha] > pivot) {
            derecha--;
        }

        while ((izquierda < derecha) and (array[izquierda] <= pivot)) {
            izquierda++;
        }

        if (izquierda < derecha) {
            temp = array[izquierda];
            array[izquierda] = array[derecha];
            array[derecha] = temp;
        }
    }

    temp = array[derecha];
    array[derecha] = array[inicio];
    array[inicio] = temp;
    return derecha;

}

void ssort(int *array, int inicio, int fin)
{
    int pivot;
    if (inicio < fin) {
        pivot = divide(array, inicio, fin);
        ssort(array, inicio, pivot - 1);
        ssort(array, pivot + 1, fin);
    }
}
int main()
{
    crearLista();
    ssort(lista,0, t-1);
    return 0;
}
