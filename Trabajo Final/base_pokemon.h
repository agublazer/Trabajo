#include<string>
#include<iostream>
using namespace std;
template<typename T>
class Pokemon
{
private:
	T _hp;
	T _exp;
	T _exp_limit;
	T _exp_after_die;
	int _level;
	string _name;
	string _pokemon_class;
	string _type;
	T _Atk;
	T _Def;
	T _spAtk;
	T _spDef;

public:
	//constructor:
	Pokemon(int level);

	//conseguir valores:

	T get_hp(){return _hp;}
	T get_exp(){return _exp;}
	T get_Atk(){return _Atk;}
	T get_Def(){return _Def;}
	int get_level(){return _level;}
	string get_name(){return _name;}
	string get_type(){return _type;}
	string get_pokemon_class(){return _pokemon_class;}

	//modificar valores:

	void set_type(string n);
	void set_pokemon_class(string n);
	void set_hp(T hp);
	void set_exp(T exp);
	void set_Atk(T atk);
	void set_Def(T def);
	void set_spAtk(T spAtk);
	void set_spDef(T spDef);

	//funciones básicas:

	void give_name(string name);
	void level_up();

	//calcular daño
	template<typename S>
	friend float atk(Pokemon<S> a,Pokemon<S> b);
};
