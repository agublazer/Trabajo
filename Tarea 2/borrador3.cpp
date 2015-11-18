#include<iostream>
#include"queue.cpp"
using namespace std;

int main()
{
    Queue<int> *queue_1;
    queue_1 = new Queue<int>;

    queue_1->push(1);
    queue_1->push(2);
    queue_1->push(3);

    queue_1->pop();

    return 0;
}
