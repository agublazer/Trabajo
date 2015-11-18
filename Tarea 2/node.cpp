#include"node.h"
template<typename T>
node<T>::node()
    {
        value = 0;
        next_node = nullptr;
    }
template<typename T>
node<T>::node(T n)
    {
        value = n;
        next_node = nullptr;
    }
template<typename T>
node<T>::node(T n, node<T>* new_node)
    {
        value = n;
        next_node = new_node;
    }
template<typename T>
node<T>::node(node<T>* new_node)
    {
        value = 0;
        next_node = new_node;
    }

template<typename T>
void node<T>::insert_after(node<T> *new_node)
    {
        new_node->next_node = this->next_node;

        this->next_node = new_node;

    }

template<typename T>
node<T>* node<T>::delete_next()
    {
        node<T> * temp_node = next_node;
        if (next_node !=  nullptr)
            next_node = next_node->next_node;

        return temp_node;
    }
