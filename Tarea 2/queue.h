template <typename T>
class Queue{
private:
    T *items;
    int size;
public:
    //constructor
    Queue();
    //funciones
    void push(T element);
    T pop();
    //suma
    Queue<T> operator +(Queue<T> q_2)
    {
        Queue<T> q_3;
        q_3.size = size + q_2.size;
        q_3.items = new T[q_3.size];
        for(int i = 0;i<size;i++)
        {
            q_3.items[i]=items[i];
        }
        int j=0;
        for(int i = size;i<q_3.size;i++)
        {
            q_3.items[i]=q_2.items[j];
            j++;
        }
        return q_3;
    }
    //resta:
    Queue<T> operator -(Queue<T> q_2)
    {
        Queue<T> q_3;
        if(size>=q_2.size)
	{
		q_3.size=size;
	}

	if(size<q_2.size)
	{
		q_3.size=q_2.size;
	}
			

        for(int i=0;i<q_3.size;i++)
        {
		if (items[i]==q_2.items[i])
                	q_3.items[i]=items[i];
                	
		if (items[i]!=q_2.items[i])
			q_3.items=0;
	}
	return q_3;
};
