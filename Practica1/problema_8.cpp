#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<string>

using namespace std;

char *cadena;
char *mayusculas;
int espacio;

string cambio(string x)
{
    cadena = new char[x.length()];
    string a = " ";
    int i=0;
    while(x[i]!=a[0])
    {
        i++;
    }
    espacio = i;
    for(int j=0;j<espacio;j++)
    {
        cadena[j]= x[j];
    }
    cadena[espacio] = a[0];
    int n= espacio+1;
    //cadena[6]=toupper(x[6]);
    //mayusculas = new char[x.length()-espacio];
    for(int j=0;j<x.length()-espacio;j++)
    {
        cadena[n]= toupper(x[n]);
        n++;

    }
}

int main()
{
    string str = "";
    getline(cin,str);
    //cout<<str.length()<<endl;
    cambio(str);
    cout<<cadena;
    return 0;

}
