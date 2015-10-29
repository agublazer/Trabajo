#include"car.h"
#include<iostream>

int main()
{
    Vehicle David("ABCDE",2015,"David");
    cout<<"Información"<<endl;
    cout<<"Dueño: "<<David.getNombre()<<endl;
    cout<<"Año: "<<David.getYear()<<endl;;
    cout<<"Licencia: "<<David.getLicense()<<endl;
    cout<<David.getDesc()<<endl;

    Car Paulo("IJKL",2015,"Paulo","XYZ");
    cout<<"Información"<<endl;
    cout<<"Estilo: "<<Paulo.getStyle()<<endl;
    cout<<Paulo.getDesc();

}
