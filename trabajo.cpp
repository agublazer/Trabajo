
#include <iostream>
using namespace std;

int cuadrado(int x);
int cubo(int x);
int fibonacci(int x);

int main(){
    int num,a;
    cout<<"Escribe un número"<<endl;
    cin>>num;
    if (num==0){
        return 0;
    }
    cout<<"¿Cuadrado(1),Cubo(2),Fibonacci(3)?"<<endl;
    cin>>a;
    if (a==1){
        cout<<cuadrado(num)<<endl;
        return main();
    }
    if (a==2){
        cout<<cubo(num)<<endl;
        return main();
    }
    if (a==3){
        cout<<fibonacci(num)<<endl;
        return main();
    }
}
int cuadrado(int x){
    return x*x;
}
int cubo(int x){
    return cuadrado(x)*x;
}
int fibonacci(int x){
    if (x== 0 or x==1){
        return 1;
    }
    else {
        return fibonacci(x-2) + fibonacci(x-1);
    }
}
