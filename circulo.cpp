#include<iostream>
#include "circulo.h"
using namespace std;

int main(){
    Circulo c1;
    cout<<"Centro del círculo: "<<endl;
    cin>>c1.centro.x;
    cin>>c1.centro.y;
    cout<<"Centro del círculo: "<<c1.centro.x <<","<< c1.centro.y<<endl;
    cout<<"Radio del círculo: "<<endl;
    cin>>c1.radio;
    cout<<"Área: "<<c1.area()<<endl;
    cout<<"Circunferencia: "<<c1.circunferencia()<<endl;
	}
