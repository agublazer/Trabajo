#include"stack.cpp"

int main()
{
    Stack<int> *stack_1;
    stack_1 = new Stack<int>(3);
    cout<<"stack 1 creado con 3 elementos"<<endl;

    cout<<"Agregar elemento (6)"<<endl;
    stack_1->push(6);
    cout<<stack_1->get_top()<<endl;
    cout<<"Agregar elemento (10)"<<endl;
    stack_1->push(10);
    cout<<stack_1->get_top()<<endl;
    cout<<"Agregar elemento (25)"<<endl;
    stack_1->push(25);
    cout<<stack_1->get_top()<<endl;
    cout<<"Agregar elemento (5)"<<endl;
    stack_1->push(5);

    cout<<"�ltimo elemento: "<<stack_1->get_top()<<endl;
    cout<<"N�mero de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar �ltimo elemento (25)"<<endl;
    stack_1->pop();
    cout<<"�ltimo elemento: "<<stack_1->get_top()<<endl;
    cout<<"N�mero de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar �ltimo elemento (10)"<<endl;
    stack_1->pop();
    cout<<"�ltimo elemento: "<<stack_1->get_top()<<endl;
    cout<<"N�mero de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar �ltimo elemento (6)"<<endl;
    stack_1->pop();
    cout<<"�ltimo elemento: "<<stack_1->get_top()<<endl;
    cout<<"N�mero de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar �ltimo elemento (vacio)"<<endl;
    stack_1->pop();
    cout<<"�ltimo elemento: "<<stack_1->get_top()<<endl;
    cout<<"N�mero de items: "<<stack_1->get_items()<<endl;

    cout<<"Agregar elemento (25)"<<endl;
    stack_1->push(25);
    cout<<stack_1->get_top()<<endl;
    cout<<stack_1->get_items()<<endl;

    return 0;
}
