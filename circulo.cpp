#include<iostream>
#include "circulo.h"
using namespace std;

int main(){
    Circulo c1;
    cout<<"Centro del c�rculo: "<<endl;
    cin>>c1.centro.x;
    cin>>c1.centro.y;
    cout<<"Centro del c�rculo: "<<c1.centro.x <<","<< c1.centro.y<<endl;
    cout<<"Radio del c�rculo: "<<endl;
    cin>>c1.radio;
    cout<<"�rea: "<<c1.area()<<endl;
    cout<<"Circunferencia: "<<c1.circunferencia()<<endl;
	}
