#include"pokemones.h"
#include<time.h>
#include<stdlib.h>

//calcular efectividad del ataque:
template<typename T>
float type(string type1, Pokemon<T> b)//"a" es el atacante y "b" el que recib el ataque
{
    string type2;
    type2 = b.get_type();

    if (type1 == "Normal")
        return 1;

    if (type1 == "Fuego" and (type2 == "Normal" or type2 == "Electrico" ))
        return 1;
    if (type1 == "Fuego" and (type2 == "Fuego" or type2 == "Agua" ))
        return 0.5;
    if (type1 == "Fuego" and type2 == "Planta" )
        return 2;

    if (type1 == "Agua" and (type2 == "Normal" or type2 == "Electrico" ))
        return 1;
    if (type1 == "Agua" and (type2 == "Agua" or type2 == "Planta" ))
        return 0.5;
    if (type1 == "Agua" and type2 == "Fuego" )
        return 2;

    if (type1 == "Electrico" and (type2 == "Normal" or type2 == "Fuego" ))
        return 1;
    if (type1 == "Electrico" and (type2 == "Electrico" or type2 == "Planta" ))
        return 0.5;
    if (type1 == "Electrico" and type2 == "Agua" )
        return 2;

    if (type1 == "Planta" and (type2 == "Normal" or type2 == "Electrico" ))
        return 1;
    if (type1 == "Planta" and (type2 == "Fuego" or type2 == "Planta" ))
        return 0.5;
    if (type1 == "Planta" and type2 == "Agua" )
        return 2;


    return 0;
}


template<typename T>
float atk(Pokemon<T> a , Pokemon<T> &b, string atk_type, int base_power)//"a" es el atacante y "b" el que recib el ataque
{
    //calcular si un golpe es critico
	int critical;
	srand(time(NULL));
	int prob = 1 +rand()% (30 -1);
	if (prob <= 9)
	{
		cout<<"Golpe critico! "<<endl;
		critical = 2;
	}
	if (prob >9)
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
    float x = type(atk_type,b);

    modifier =  stab*x*random*critical;


    //daño total
    float damage;
    damage= (((2* a.get_level() + 10)/250.0)*(a.get_Atk()/b.get_Def())*base_power + 2)*modifier;

    b.damage(damage);
    cout<<"El ataque causo: "<<damage<<" de daño"<<endl;
    if (x == 0.5)
        cout<<"No fue muy efectivo"<<endl;
    if (x == 2)
        cout<<"Muy efectivo"<<endl;

}


