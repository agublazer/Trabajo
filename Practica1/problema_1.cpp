#include<iostream>
#include<stdlib.h>
using namespace std;

int **A;
int **B;
int **C;
int m,n,p;

void crear(int x, int y, int z)
{
    A = new int*[x];
    for(int i = 0; i <x; ++i)
    {
        A[i] = new int[y];
    }

    cout<<"Matriz 1"<<endl;
    for(int i =0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            A[i][j]=rand()%5+1;
            cout<<A[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<" "<<endl;

    cout<<"Matriz 2"<<endl;
    B= new int*[y];
    for(int i = 0; i <y; ++i)
    {
        B[i] = new int[z];
    }
    for(int i =0;i<y;i++)
    {
        for(int j=0;j<z;j++)
        {
            B[i][j]=rand()%5+1;
            cout<<B[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    C= new int*[x];
    for(int i = 0; i <x; ++i)
    {
        C[i] = new int[z];
    }
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<p; ++j)
        {
            C[i][j] = 0;
        }
    }
}

void productMatriz()
{
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<p; ++j)
        {
            for(int z=0; z<n; ++z)
            {
                C[i][j] += A[i][z] * B[z][j];
            }
        }
    }
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<p; ++j)
        {
            cout<< C[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
}

int main()
{
    cout<<"Matriz 1: "<<endl;
    cout<<"Filas: "; cin>>m;
    cout<<"Columnas: "; cin>>n;
    cout<<" "<<endl;
    cout<<"Matriz 2: "<<endl;
    cout<<"Filas: "<<n<<endl;
    cout<<"Columnas: "; cin>>p;
    crear(m,n,p);
    cout<<" "<<endl;
    productMatriz();
}


