#include<iostream>
#include<stdlib.h>
using namespace std;

int A[20][20];
int B[20][20];
int C[20][20];
int m,n,p;

int productMatriz(int matriz1[20][20], int matriz2[20][20],int x1,int x2,int x3)
{
    for(int i=0; i<x1; ++i)
    {
        for(int j=0; j<x3; ++j)
        {
            C[i][j] = 0;
        }
    }
    for(int i=0; i<x1; ++i)
    {
        for(int j=0; j<x3; ++j)
        {
            for(int z=0; z<x2; ++z)
            {
                C[i][j] += matriz1[i][z] * matriz2[z][j];
            }
        }
    }
    for(int i=0; i<x1; ++i)
    {
        for(int j=0; j<x3; ++j)
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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=rand()%5+1;
            cout<<A[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<"Matriz 2: "<<endl;
    cout<<"Filas: "<<n<<endl;
    cout<<"Columnas: "; cin>>p;
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<p;l++)
        {
            B[k][l]=rand()%5+1;
            cout<<B[k][l]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<" "<<endl;
    productMatriz(A,B,m,n,p);
}
