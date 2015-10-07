#include<iostream>
#include<stdlib.h>
using namespace std;

const int n = 4000000;

int main()
{
    int *lista;
    lista= new int[n];
    int x;
    cout<<"Número a encontrar(del 1 al 100): "; cin>>x;
    cout<<"Posiciones: "<<endl;
    for(int i=0;i<n;i++)
    {
        lista[i]=rand()%100+1;
        if(lista[i]==x)
        {
            cout<<i<<" ";
        }
    }
}
