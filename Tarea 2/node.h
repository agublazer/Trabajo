template<typename T>
class node{
private:
    T value;
    node<T> *next_node;
public:
    //constructores:
    node();
    node(T n);
    node(T n, node<T>* new_node);
    node(node<T>* new_node);

    //insertar un nodo después de otro:
    void insert_after(node<T> *new_node);

    //borrar el siguiente nodo:
    node<T>* delete_next();

    //modificar valores:

    void set_value(T n);
    void set_next(node<int> *new_node){next_node = new_node;}

    //recuperar valores:
    T get_value() {return value;}
    node<T>* get_next(){return next_node;}
};

