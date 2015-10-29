#include<string>
#include<iostream>
#include<sstream>
using namespace std;

string cambio_str(int numero )
{
	stringstream cambiar;
	cambiar << numero;
	return cambiar.str();
}

class Vehicle {
protected:
    string license;
    string propietario;
    int year ;
public :
    Vehicle ( const string & myLicense , const int myYear ,const string &nombre)
        : license ( myLicense ), year ( myYear ),propietario(nombre) {}
    const string getDesc () const
        { return license + " from "+ cambio_str(year) + " de " + propietario  ;}
    const string & getLicense () const { return license ;}
    const string & getNombre() const {return propietario;}
    const int getYear () const { return year ;}
};
