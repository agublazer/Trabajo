#include"car.h"
#include<iostream>

int main()
{
    Vehicle David("ABCDE",2015,"David");
    cout<<"Informaci�n"<<endl;
    cout<<"Due�o: "<<David.getNombre()<<endl;
    cout<<"A�o: "<<David.getYear()<<endl;;
    cout<<"Licencia: "<<David.getLicense()<<endl;
    cout<<David.getDesc()<<endl;

    Car Paulo("IJKL",2015,"Paulo","XYZ");
    cout<<"Informaci�n"<<endl;
    cout<<"Estilo: "<<Paulo.getStyle()<<endl;
    cout<<Paulo.getDesc();

}
