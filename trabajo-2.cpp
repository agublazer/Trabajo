#include <iostream>
using namespace std;

int cuadrado( int * );
int cubo( int * );
int fibonacci( int * );

int main()
{
    int num,a;
    cout << "Escribe un número"<< endl;
    cin >> num;
    if (num == 0){
        return 0;
    }
    cout << "Cuadrado(1),Cubo(2),Fibonacci(3)"<< endl;
    cin >> a;
    if (a == 1){
        cuadrado( &num );
        cout<< num << endl;
        return main();
    }
    if (a == 2){
        cubo( &num );
        cout<< num << endl;
        return main();
    }
    if (a == 3){
        fibonacci( &num );
        cout<< num << endl;
        return main();
    }


    return 0;
}

int cuadrado( int *p )
{
    *p = *p * *p ;
    return 0;
}
int cubo( int *p )
{
    *p = *p * *p * *p ;
    return 0;
}
int fibonacci( int *p )
{
    int a=0, b=1, c;
    int i;
    for (i=0;i<*p;i++){
        c=b;
        b=b+a;
        a=c;
    }
    *p = b;
    return 0;
}



