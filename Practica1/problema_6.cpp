#include<iostream>
#include<string>
using namespace std;

char *cadena;

char copiar(string x,string y)
{
    int a = x.length();
    int b = y.length();
    cadena = new char[b];
    for(int i=0;i<b;i++)
        cadena[i]=y[i];
    for(int j=0;j<a;j++)
        cadena[j]=x[j];
    return *cadena;
}

char juntar(string x, string y,int n)
{
    int x1 = x.length();
    int x2 = y.length();

    cadena = new char[n];
    for(int i=0;i<x1;i++)
    {
        cadena[i]=x[i];
    }
    for(int j=0;j<x2;j++)
    {
        cadena[x1]=y[j];
        x1 = x1+1;
    }
    return *cadena;
}

int igualdad(string x, string y)
{
    int a = x.length();
    int b = y.length();
    int c = 0;
    bool res = true;
    if (x.length()!= y.length())
    {
        cout<<"No son iguales"<<endl;
        return 0;
    }
    if (x.length() == y.length())
    {
       for(int i=0;i<x.length();i++)
       {
           if(x[i]==y[i])
           {
               res = res and true;
           }
           if(x[i] !=y[i])
           {
               res = res and false;
           }
       }
    }
    switch(res)
    {
        case true:
            {
            cout<<"Son iguales"<<endl;
            break;
            }
        case false:
            {
            cout<<"No son iguales"<<endl;
            break;
            }
        default:
            cout<<"gg"<<endl;
    }
}

int main()
{
    int n;
    cout<<"1: Copiar el contenido de una cadena a otra"<<endl;
    cout<<"2: Juntar dos cadenas"<<endl;
    cout<<"3: Devolver la longitud de una cadena"<<endl;
    cout<<"4: Comparar si dos cadenas son iguales"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Opcion: ";cin>>n;
    switch(n)
    {
        case 1:
        {
            string a,b;
            cout<<"Cadena a copiar: "; cin>>a;
            cout<<"Cadena destino: "; cin>>b;
            int c=b.length();
            copiar(a,b);
            for(int i=0;i<c;i++)
            {
                cout<<cadena[i];
            }
            break;
        }
        case 2:
        {
            string a,b;
            cout<<"Cadena 1: "; cin>>a;
            cout<<"Cadena 2: "; cin>>b;
            int c = a.length() + b.length();
            juntar(a,b,c);
            for(int i=0;i<c;i++)
            {
                cout<<cadena[i];
            }
            break;
        }
        case 3:
        {
            string x;
            cin>>x;
            cout<<"Longitud de la cadena: "<<x.length()<<endl;
            break;
        }
        case 4:
        {
            string x,y;
            cout<<"Cadena 1: "; cin>>x;
            cout<<"Cadena 2: "; cin>>y;
            igualdad(x,y);
            break;
        }
        default:
            cout<<"gg"<<endl;
    }
}
