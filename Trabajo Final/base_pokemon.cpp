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
        _limit1 = 5;
        _limit2 = 35;
        _hp = 150;
        _exp_limit = 100;
        _exp_after_die = 25;
        break;
    case 2:
        _limit1 = 35;
        _limit2 = 65;
        _hp = 250;
        _exp_limit = 200;
        _exp_after_die = 50;
        break;
    case 3:
        _limit1 = 65;
        _limit2 = 95;
        _hp = 350;
        _exp_limit= 300;
        _exp_after_die = 75;
        break;
    case 4:
        _limit1 = 95;
        _limit2 = 125;
        _hp = 450;
        _exp_limit = 400;
        _exp_after_die= 100;
        break;
    default:
        _limit1=0;
        _limit2=0;

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
        cout<<_name<<" ha evolucionado al nivel "<<_level<<endl;
    }
    else
        cout<<_name<<" ha llegado al nivel máximo"<<endl;

    switch(_level)
    {
    case 1:
        _limit1 = 5;
        _limit2 = 35;
        _hp = 150;
        _exp_limit = 100;
        _exp_after_die = 25;
        break;
    case 2:
        _limit1 = 35;
        _limit2 = 65;
        _hp = 250;
        _exp_limit = 200;
        _exp_after_die = 50;
        break;
    case 3:
        _limit1 = 65;
        _limit2 = 95;
        _hp = 350;
        _exp_limit= 300;
        _exp_after_die = 75;
        break;
    case 4:
        _limit1 = 95;
        _limit2 = 125;
        _hp = 450;
        _exp_limit = 400;
        _exp_after_die= 100;
        break;
    default:
        _limit1=95;
        _limit2=125;
        _hp=450;
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

