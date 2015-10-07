#include<iostream>
using namespace std;

int main()
{
    int n;
    int x=1;
    cout<<"Factorial: "; cin>>n;
    if (n==0 or n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
            x = x*i;
        cout<<x<<endl;
    }

}
