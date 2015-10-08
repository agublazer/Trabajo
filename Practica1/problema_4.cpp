#include<iostream>
using namespace std;

int factorial(int p)
{
    int x=1;
    
    if (p==0 or p==1)
    {
        return 1;
    }
    else
    {
        for(int i=1;i<=p;i++)
            x = x*i;
    }
    return x;
}

int main()
{
    int n;
    cout<<"Factorial: "; cin>>n;
    cout<<factorial(n);
}
