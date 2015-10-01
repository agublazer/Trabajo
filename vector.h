#include<math.h>

class Punto{
public:
	double x, y;
};

class  Vector{
public:
	Punto c1;
	Punto c2;
	double longitud(){
        double a;
        a = (c2.x - c1.x)*(c2.x - c1.x) + (c2.y - c1.y)*(c2.y - c1.y);
        return sqrt(a);
	}
};

