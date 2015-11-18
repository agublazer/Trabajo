template<typename T>
class Stack{
private:
    int max_size;
    int n_items;
    T top_item;
    T* stack_items;
public:
    //constructores:
    Stack(int n);

    //añadir valores:
    int push(T n);

    //eliminar último valor:
    int pop();

    //conseguir valores:
    int get_size(){return max_size;}
    T get_top(){return top_item;}
    int get_items(){return n_items;}
};
