#include"pokemones.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

template<typename T>
float atk(Pokemon<T> a , Pokemon<T> b, string atk_type)//"a" es el atacante y "b" el que recib el ataque
{
    //calcular si un golpe es critico
	int critical;
	srand(time(NULL));
	int prob = 1 +rand()% (20 -1);
	if (prob <=7)
		critical = 2;
	if (prob >7)
		critical = 1;

    //same attack type bonus:
	float stab;
	bool same;
	if (atk_type == a.get_type())
        same = true;
    else
        same == false;

	if (same == true)
		stab = 1.5;
	if (same == false)
		stab = 1.0;
    //random entre 0.85 y 1

    int r = 0 + rand()% (15-0);
    double random;
    random  = (100-r)/100.0;

    //modificador de daño
    float modifier;
	modifier =  stab*1*random;

	return modifier;
}

int main()
{
    Pikachu<int> david(1);
    Pikachu<int> paulo(1);
    cout<<"Vida: "<<david.get_hp()<<endl;
    float b = atk(david,paulo,"electrico");
    cout<<b<<endl;
	paulo.set_hp(paulo.get_hp() - b);
	cout<<"Vida de paulo: "<<paulo.get_hp()<<endl;

	return 0;
}

