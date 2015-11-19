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
    Stack();

    //añadir valores:
    int push(T n);

    //eliminar último valor:
    int pop();

    //conseguir valores:
    int get_size(){return max_size;}
    T get_top(){return top_item;}
    int get_items(){return n_items;}

    //suma:
    Stack<T> operator +(Stack<T> s_2)
    {
        Stack<T> s_3;
        s_3.max_size = max_size + s_2.max_size;
        s_3.stack_items = new T[s_3.max_size];
        for(int i=0;i<max_size;i++)
        {
            s_3.stack_items[i]=stack_items[i];
        }
        int j=0;
        for(int i=max_size;i<s_3.max_size;i++)
        {
            s_3.stack_items[i]=s_2.stack_items[j];
            j++;
        }
        return s_3;
    }
    
    Stack<T> operator -(Stack<T> s_2)
    {
        Stack<T> s_3;
        if(max_size>=s_2.max_size)
	{
		s_3.max_size=max_size;
	}

	if(max_size<s_2.max_size)
	{
  		s_3.max_size=s_2.max_size;
	}
			

        for(int i=0;i<s_3.max_size;i++)
        {
		if (stack_items[i]==s_2.stack_items[i])
            		s_3.stack_items[i]=stack_items[i];
            	if (stack_items[i]!=s_2.stack_items[i])
            		s_3.stack_items[i]=0;
        }
	return s_3;
};
