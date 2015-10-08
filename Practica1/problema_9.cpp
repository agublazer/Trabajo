#include<iostream>
#include<string>
using namespace std;

void encontrar_letra(string x)
{
    int a,b;
    bool n = false;
    cout<<"¿Cuántas letras tiene el nombre? ";cin>>a;
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

int main()
{
    string x;
    getline(cin,x);
    encontrar_letra(x);

}

