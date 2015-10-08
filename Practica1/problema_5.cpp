#include<iostream>
#include<fstream>
using namespace std;

const int n = 50;
char *cadena;

void print()
{
    cadena = new char[n];
    ifstream fs("texto2.txt");
    fs.getline(cadena,n);
}

int main()
{
    cout<<cadena<<endl;
}
