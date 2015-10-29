typedef double n;
class   Point{
private:
    n x,y;
public:
    n getX(){return x;}
    n getY(){return y;}
    void dar_valores(n valor1, n valor2)
    {
        x = valor1;
        y = valor2;
    }
    Point()
    {
        x=0;
        y=0;
    }
    Point(n a, n b)
    {
        x=a;
        y=b;
    }
};
