#include"pokemones.h"

int main()
{
	Pikachu<long> David(1);
	cout<<"Pokemon creado"<<endl;
	string name = "";
	cout<<"¿Qué nombre quieres darle?"<<endl;
	getline(cin,name);
	David.give_name(name);
	cout<<"El pokemon tiene: "<<endl;
	cout<<"Vida: "<<David.get_hp()<<endl;
	cout<<"Exp: "<<David.get_exp()<<endl;
	cout<<"Ataque: "<<David.get_Atk()<<endl;
	cout<<"Defensa: "<<David.get_Def()<<endl;
	cout<<"Nivel: "<<David.get_level()<<endl;
	cout<<"Tu pokemon es de tipo "<<David.get_type()<<endl;
	cout<<David.get_name()<<" es un "<<David.get_pokemon_class()<<endl;
	
	return 0;
}
