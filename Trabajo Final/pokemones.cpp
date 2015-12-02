#include"calcular_daño.cpp"

//Pikachu

template<typename S>
void Pikachu<S>::level_up()
{
    this->_level++;
    this->set_max_hp(this->get_max_hp()+ 1.92);
    this->set_Atk(this->get_Atk()+ 1.11);
    this->set_Def(this->get_Def()+ 0.96);

    this->_hp= this->get_max_hp();
    this->_exp= 0;
}

template<typename S>
void Pikachu<S>::choose_attack(Pikachu<S>a ,Pokemon<S> &b)
{
    int option;
    cin>>option;
    switch(option){
    case 1:
        thunder_shock(a,b);
        break;
    default:
        break;
    }
}
template<typename S>
float thunder_shock(Pikachu<S> a, Pokemon<S> &b)
{
    int base_power = 40;
    string atk_type = "Electrico";

    return atk(a,b,atk_type,base_power);

}
template<typename S>
float quick_attack(Pikachu<S> a, Pokemon<S> &b)
{
    int base_power = 40;
    string atk_type = "Electrico";

    return atk(a,b,atk_type,base_power);
}

//Bulbasaur

template<typename S>
void Bulbasaur<S>::level_up()
{
    this->_level++;
    this->set_max_hp(this->get_max_hp()+ 2.02);
    this->_hp = this->get_max_hp();
    this->set_Atk(this->get_Atk()+ 1.05);
    this->set_Def(this->get_Def()+ 1.05);
    this->set_exp(0);
}

template<typename S>
float tackle(Bulbasaur<S> a, Pokemon<S>&b)
{
    int base_power = 50;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float razor_leaf(Bulbasaur<S> a, Pokemon<S>&b)
{
    int base_power = 55;
    string atk_type = "Planta";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float rest(Bulbasaur<S> a, Pokemon<S>&b)
{
    if (a.get_level() <= 5)
    {
        b.heal(15);
        return 15;
    }
    if (a.get_level() <= 10)
    {
        b.heal(25);
        return 25;
    }
}

//Squirtle

template<typename S>
void Squirtle<S>::level_up()
{
    this->_level++;
    this->set_max_hp(this->get_max_hp()+ 2.01);
    this->_hp= this->get_max_hp();
    this->set_Atk(this->get_Atk()+ 1.04);
    this->set_Def(this->get_Def()+ 1.21);
    this->set_exp(0);
}

template<typename S>
float tackle(Squirtle<S> a, Pokemon<S>&b)
{
    int base_power = 50;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float water_gun(Squirtle<S> a, Pokemon<S>&b)
{
    int base_power = 40;
    string atk_type = "Agua";

    return atk(a,b,atk_type,base_power);
}

//Charmander:

template<typename S>
void Charmander<S>::level_up()
{
    this->_level++;
    this->set_max_hp(this->get_max_hp()+ 1.96);
    this->_hp = this->get_max_hp();
    this->set_Atk(this->get_Atk()+ 1.08);
    this->set_Def(this->get_Def()+ 0.99);
    this->set_exp(0);
}

template<typename S>
float scratch(Charmander<S> a, Pokemon<S>&b)
{
    int base_power = 40;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float ember(Charmander<S> a, Pokemon<S>&b)
{
    int base_power = 40;
    string atk_type = "Fuego";

    return atk(a,b,atk_type,base_power);
}

//Rattata

template<typename S>
void Rattata<S>::level_up()
{
    this->_level++;
    this->set_max_hp(this->get_max_hp()+ 1.87);
    this->_hp = this->get_max_hp();
    this->set_Atk(this->get_Atk()+ 1.12);
    this->set_Def(this->get_Def()+ 0.91);
    this->set_exp(0);
}

template<typename S>
float tackle(Rattata<S> a, Pokemon<S>&b)
{
    int base_power = 50;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

