#include<iostream>
#include<string>
using namespace std;

int main()
{
    string x,b;
    int a;
    bool n = false;
    getline(cin,x);
    cout<<"¿Cuántas letras tiene su nombre? ";cin>>a;
    cout<<"Letra a encontrar: ";cin>>b;
    cout<<"Posiciones: "<<endl;
    for(int i=0;i<a;i++)
    {
        if(x[i]==b[0])
        {
            cout<<i<<" ";
        }
    }
    for(int i=0;i<a;i++)
    {
        if(x[i]!=b[0])
        {
            n=n or false;
        }
        if(x[i]==b[0])
        {
            n=n or true;
        }
    }
    if(n==false)
    {
        cout<<"No se encontró la letra"<<endl;
    }
}

