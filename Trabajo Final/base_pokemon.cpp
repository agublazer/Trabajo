#include"base_pokemon.h"

template<typename T>
Pokemon<T>::Pokemon(int level)
{
    this->_exp_limit=5*_level;
	this->_level = level;
	this->_exp = 0;
	this->_name = "Pokemon salvaje";

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
void Pokemon<T>::set_max_hp(T hp)
{
	this->_max_hp=hp;
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
void Pokemon<T>::damage(T n)
{
    if (this->_hp - n < 0)
        this->_hp=0;
    else
        this->_hp -= n;
}

template<typename T>
void Pokemon<T>::heal(T n)
{
    if (this->_hp + n > this->_max_hp)
        this->_hp=this->_max_hp;
    else
        this->_hp += n;
}
template<typename T>
void Pokemon<T>::gain_exp(T n)
{
    _exp += n;
}




