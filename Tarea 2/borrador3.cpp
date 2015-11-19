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

    Queue<int> *q_2;
    Queue<int> *q_3;
    Queue<int> *q_4;

    q_2=new Queue<int>;
    q_3=new Queue<int>;
    q_4=new Queue<int>;

    *q_2 = *q_3 + *q_4;
    return 0;
}
