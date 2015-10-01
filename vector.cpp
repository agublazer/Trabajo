#include<iostream>
#include "vector.h"
using namespace std;

int main(){
    Vector v1;
    cout<<"Punto 1: "<<endl;
    cin>>v1.c1.x;
    cin>>v1.c1.y;
    cout<<"Punto 1: "<<v1.c1.x<<","<<v1.c1.y<<endl;
    cout<<"Punto 2: "<<endl;
    cin>>v1.c2.x;
    cin>>v1.c2.y;
    cout<<"Punto 2: "<<v1.c2.x<<","<<v1.c2.y<<endl;
    cout<<"Longitud: "<<v1.longitud()<<endl;
	}
