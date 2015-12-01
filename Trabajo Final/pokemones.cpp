#include"calcular_daño.cpp"

//Pikachu
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
float tackle(Rattata<S> a, Pokemon<S>&b)
{
    int base_power = 50;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

int main()
{

    Pikachu<int> paulo(1);
    Bulbasaur<int> david(1);
    Squirtle<int> paulo2(1);
    Charmander<int> david2(1);
    Rattata<int> paulo3(1);

    razor_leaf(david,paulo2);
    cout<<paulo2.get_hp()<<endl;

    razor_leaf(david,paulo2);
    cout<<paulo2.get_hp()<<endl;

    return 0;
}
