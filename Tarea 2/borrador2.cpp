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

    cout<<"Último elemento: "<<stack_1->get_top()<<endl;
    cout<<"Número de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar último elemento (25)"<<endl;
    stack_1->pop();
    cout<<"Último elemento: "<<stack_1->get_top()<<endl;
    cout<<"Número de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar último elemento (10)"<<endl;
    stack_1->pop();
    cout<<"Último elemento: "<<stack_1->get_top()<<endl;
    cout<<"Número de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar último elemento (6)"<<endl;
    stack_1->pop();
    cout<<"Último elemento: "<<stack_1->get_top()<<endl;
    cout<<"Número de items: "<<stack_1->get_items()<<endl;

    cout<<"Eliminar último elemento (vacio)"<<endl;
    stack_1->pop();
    cout<<"Último elemento: "<<stack_1->get_top()<<endl;
    cout<<"Número de items: "<<stack_1->get_items()<<endl;

    cout<<"Agregar elemento (25)"<<endl;
    stack_1->push(25);
    cout<<stack_1->get_top()<<endl;
    cout<<stack_1->get_items()<<endl;

    Stack<int> *s_a;
    Stack<int> *s_b;
    Stack<int> *s_c;

    s_a = new Stack<int>;
    s_b = new Stack<int>(2);
    s_c = new Stack<int>(2);

    *s_a = *s_b + *s_c;



    return 0;
}
