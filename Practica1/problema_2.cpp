#include<iostream>
#include<string>
using namespace std;

int no_repetitions(string a)
{
    int b = a.length();
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(a[i]==a[j] and i!=j)
            {
                if(j<i)
                {
                    a.erase(a.begin()+i);
                    b = a.length();
                }
                if(i<j)
                {
                   a.erase(a.begin()+j);
                    b = a.length();
                }
            }
            else
            {
                int gg=2;
            }
        }
    }
    cout << a << endl;
    return 0;
}
int main()
{
    string x;
    getline(cin,x);
    no_repetitions(x);
}
