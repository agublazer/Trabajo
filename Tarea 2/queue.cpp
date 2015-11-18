#include"queue.h"
template<typename T>
Queue<T>::Queue()
{
    size=0;
    items =  new T[size];
}
template<typename T>
void Queue<T>::push(T element)
{
    size+=1;
    T *new_items;
    new_items = new T[size];

    int i =0;
    new_items[i]= element;
    ++i;

    for(;i<size;++i)
    {
        new_items[i]= items[i-1];
    }

    delete[] items;
    items = new_items;
}

template<typename T>
T Queue<T>::pop()
{
    T result = items [size-1];
    size -= 1;

    T * new_items;
    new_items = new T[size];
    for (int i=0;i<size;++i)
    {
        new_items[i]=items[i];
    }
    delete[] items;
    items= new_items;

}
