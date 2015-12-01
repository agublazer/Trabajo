#include"base_pokemon.cpp"

template<typename T>
class Pikachu: public Pokemon<T>{
public:
    Pikachu(int level): Pokemon<T>(level)
    {
        this->set_type("Electrico");
        this->set_pokemon_class("Pikachu");
        this->set_hp(35);
        this->set_max_hp(35);
        this->set_Atk(55);
        this->set_Def(40);
    };

    //poderes:
    template<typename S>
    friend float thunder_shock(Pikachu<S> a, Pokemon<S> &b);
    template<typename P>
    friend float quick_attack(Pikachu<P> a, Pokemon<P> &b);

};

template<typename T>
class Bulbasaur: public Pokemon<T>{
public:
    Bulbasaur(int level): Pokemon<T>(level)
    {
        this->set_type("Planta");
        this->set_pokemon_class("Bulbasaur");
        this->set_hp(45);
        this->set_max_hp(45);
        this->set_Atk(49);
        this->set_Def(49);
    };
    //poderes:
    template<typename S>
    friend float tackle(Bulbasaur<S> a, Pokemon<S> &b);
    template<typename P>
    friend float razor_leaf(Bulbasaur<P> a, Pokemon<P> &b);
    template<typename U>
    friend float rest(Bulbasaur<U> a, Pokemon<U> &b);



};

template<typename T>
class Charmander: public Pokemon<T>{
public:
    Charmander(int level): Pokemon<T>(level)
    {
        this->set_type("Fuego");
        this->set_pokemon_class("Charmander");
        this->set_hp(39);
        this->set_max_hp(39);
        this->set_Atk(52);
        this->set_Def(43);
    };
    //poderes:
    template<typename S>
    friend float scratch(Charmander<S> a, Pokemon<S> &b);
    template<typename P>
    friend float ember(Charmander<P> a, Pokemon<P> &b);
};

template<typename T>
class Squirtle: public Pokemon<T>{
public:
    Squirtle(int level): Pokemon<T>(level)
    {
        this->set_type("Agua");
        this->set_pokemon_class("Squirtle");
        this->set_hp(44);
        this->set_max_hp(44);
        this->set_Atk(48);
        this->set_Def(65);
    };
    //poderes:
    template<typename S>
    friend float tackle(Squirtle<S> a, Pokemon<S> &b);
    template<typename P>
    friend float water_gun(Squirtle<P> a, Pokemon<P> &b);

};

template<typename T>
class Rattata: public Pokemon<T>{
public:
    Rattata(int level): Pokemon<T>(level)
    {
        this->set_type("Normal");
        this->set_pokemon_class("Rattata");
        this->set_hp(55);
        this->set_max_hp(55);
        this->set_Atk(55);
        this->set_Def(50);
    };

    template<typename P>
    friend float tackle(Rattata<P> a, Pokemon<P> &b);

};
