template <typename T>
class Queue{
private:
    T *items;
    int size;
public:
    //constructor
    Queue();
    void push(T element);
    T pop();
};
