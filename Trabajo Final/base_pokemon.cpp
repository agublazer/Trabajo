#include"base_pokemon.h"

template<typename T>
Pokemon<T>::Pokemon(int level)
{
	this->_level = level;
	this->_exp = 0;
	this->_name = "Pokemon salvaje";

	switch(_level)
	{
	case 1:
	_exp_limit = 100;
	_exp_after_die = 25;
	break;

	case 2:
	_exp_limit = 200;
	_exp_after_die = 50;
	break;

	case 3:	
	_exp_limit= 300;
	_exp_after_die = 75;
	break;

	case 4:
	_exp_limit = 400;
	_exp_after_die= 100;
	break;

	default:
	_hp=0;
	_exp_limit=0;
	_exp_after_die=0;
	}
}

template<typename T>	
void Pokemon<T>::level_up()
{
	this->_exp = 0;
	if(_level < 4)
	{
		this->_level++;
		cout<<_name<<" ha evolucionado al nivel"<<_level<<endl;
	}
	else
		cout<<_name<<" ha llegado al nivel máximo"<<endl;
	switch(_level)
	{
	case 1:
	_exp_limit = 100;
	_exp_after_die = 25;
	break;
	case 2:
	_exp_limit = 200;
	_exp_after_die = 50;
	break;
	case 3:
	_exp_limit= 300;
	_exp_after_die = 75;
	break;
	case 4:
	_exp_limit = 400;
	_exp_after_die= 100;
	break;
	default:
	_exp_limit=400;
	_exp_after_die=100;
	}
}

template<typename T>
void Pokemon<T>::give_name(string name)
{
	this->_name = name;
}

template<typename T>
void Pokemon<T>::set_type(string n)
{
	this->_type=n;
}

template<typename T>
void Pokemon<T>::set_pokemon_class(string n)
{
	this->_pokemon_class=n;
}

template<typename T>
void Pokemon<T>::set_hp(T hp)
{
	this->_hp=hp;
}

template<typename T>
void Pokemon<T>::set_exp(T exp)
{
	this->_exp=exp;
}

template<typename T>
void Pokemon<T>::set_Atk(T atk)
{
	this->_Atk=atk;
}

template<typename T>
void Pokemon<T>::set_Def(T def)
{
	this->_Def=def;
}


template<typename T>
void Pokemon<T>::set_spAtk(T spAtk)
{
	this->_spAtk=spAtk;
}

template<typename T>
void Pokemon<T>::set_spDef(T spDef)
{
	this->_spDef=spDef;
}




