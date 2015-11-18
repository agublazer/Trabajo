#include<iostream>
#include"stack.h"
using namespace std;

template<typename T>
Stack<T>::Stack(int n)
{
    max_size = n;
    n_items = 0;
    stack_items = new T[max_size];
}

template<typename T>
int Stack<T>::push(T n)
{
    if (n_items+1 > max_size)
    {
        cout<<"El stack está lleno"<<endl;
        return 0;
    }
    if (n_items<max_size+1)
    {
        stack_items[n_items]=n;
        top_item= stack_items[n_items];
        n_items++;
    }

}
template<typename T>
int Stack<T>::pop()
{
    if (n_items==0)
    {
        cout<<"El stack está vacío"<<endl;
        return 0;
    }
    if (n_items > 0)
    {
        stack_items[n_items-1]= 0;
        n_items--;
        if (n_items==0)
            top_item=0;
        if (n_items!=0)
            top_item= stack_items [n_items-1];
    }
}

