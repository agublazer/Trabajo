#include<iostream>
#include<fstream>
using namespace std;

const int n = 20;
char *cadena;

int main()
{
    cadena = new char[n];
    //ofstream fe("texto2.txt");
    //fe <<"Hola Mundo"<<endl;
    //fe.close();
    ifstream fs("texto2.txt");
    fs.getline(cadena,n);
    cout<<cadena<<endl;
}
