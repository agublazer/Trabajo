#include"punto.h"
#include<math.h>

class Vector{
private:
    Point inicio;
    Point fin;
public:
    Vector(n x1,n y1,n x2,n y2)
    {
        inicio.dar_valores(x1,y1);
        fin.dar_valores(x2,y2);
    }
    n distancia()
    {
        n a;
        a = sqrt(pow(fin.getX()-inicio.getX(),2)+pow(fin.getY()-inicio.getY(),2));
        return a;
    }
};
