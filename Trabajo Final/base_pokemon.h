#include<string>
#include<iostream>
using namespace std;
template<typename T>
class Pokemon
{
private:
	T _max_hp;
	T _exp_limit;
	string _name;
	string _pokemon_class;
	string _type;
	T _Atk;
	T _Def;

protected:
    int _level;
    T _hp;
    T _exp;

public:
	//constructor:
	Pokemon(int level);

	//conseguir valores:

	T get_hp(){return _hp;}
	T get_max_hp(){return _max_hp;}
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
    void set_max_hp(T hp);
	void set_Atk(T atk);
	void set_Def(T def);

	//funciones básicas:

	void give_name(string name);
	void level_up() {return 0;}
    void gain_exp(T n);
	void damage(T n);
	void heal(T n);

	virtual void choose_attack(Pokemon<T> a, Pokemon<T> &b){cout<<0;}
	virtual void ai_choose_attack(Pokemon<T> a, Pokemon<T> &b){cout<<0;}

	//calcular daño
	template<typename S>
	friend float atk(Pokemon<S> a,Pokemon<S> &b,string atk_type, int base_power);
};
