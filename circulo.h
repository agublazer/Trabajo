double pi = 3.1415;

class Punto{
public:
	double x, y;
};

class Circulo{
public:
	Punto centro;
	double radio;
	double area(){
		return radio*radio*pi;
		}
	double circunferencia(){
		return 2*pi*radio;
		}

};

