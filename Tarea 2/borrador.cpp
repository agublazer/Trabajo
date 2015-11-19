#include<iostream>
#include"node.cpp"
using namespace std;

int main()
{
    node<int> *nodo1;
    nodo1 = new node<int>;

    node<int> *nodo2;
    nodo2 = new node<int>;

    cout<<"Dirección nodo 1: "<<nodo1<<endl;
    cout<<"Dirección nodo 2: "<<nodo2<<endl;

    cout<<"El nodo 1 apunta a: "<<nodo1->get_next()<<endl;
    cout<<"El nodo 2 apunta a: "<<nodo2->get_next()<<endl;

    node<int> *nodo3;
    nodo3 = new node<int>(nodo1);
    cout<<"El nodo 3 se crea con el constructor apuntando al nodo 1"<<endl;
    cout<<"El nodo 3 apunta a: "<<nodo3->get_next()<<endl;

    nodo3->insert_after(nodo2);
    cout<<"Insertar Nodo2 después del Nodo3"<<endl;
    cout<<"El nodo 2 apunta a: "<<nodo2->get_next()<<endl;
    cout<<"El nodo 3 apunta a: "<<nodo3->get_next()<<endl;


    cout<<"Borrar el nodo siguiente al Nodo3"<<endl;
    nodo3->delete_next();
    cout<<"El nodo 3 apunta a: "<<nodo3->get_next()<<endl;

    node<int> *nodo4;
    node<int> *nodo5;
    node<int> *nodo6;
    node<int> *nodo7;

    nodo4 = new node<int>;
    nodo5 = new node<int>(2);
    nodo6 = new node<int>(3);
    nodo7 = new node<int>;
    cout<<nodo5->get_value() + nodo6->get_value()<<endl;
    *nodo4 = *nodo5 + *nodo6;
    cout<<nodo4->get_value()<<endl;
    cout<<nodo5->get_value() - nodo6->get_value()<<endl;
    *nodo4 = *nodo5 - *nodo6;
    delete nodo1,nodo2,nodo3;

    return 0;
}
