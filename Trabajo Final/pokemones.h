#include"base_pokemon.cpp"

template<typename T>
class Pikachu: public Pokemon<T>{
public:
    Pikachu(int level): Pokemon<T>(level)
    {
        this->_hp = 35 + (this->_level-1)*1.92;
        this->set_Atk(55 + (this->_level-1)*1.11);
        this->set_Def(35 + (this->_level-1)*0.96);

        this->set_type("Electrico");
        this->set_pokemon_class("Pikachu");
        this->set_max_hp(this->_hp);
    };


    void level_up();
    void ai_choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void choose_attack(Pokemon<T>a ,Pokemon<T> &b);

    //poderes:
    template<typename S>
    friend float thunder_shock(Pokemon<S> a, Pokemon<S> &b);
    template<typename P>
    friend float quick_attack(Pokemon<P> a, Pokemon<P> &b);

};

template<typename T>
class Bulbasaur: public Pokemon<T>{
public:
    Bulbasaur(int level): Pokemon<T>(level)
    {

        this->_hp = 45 + (this->_level-1)*2.02;
        this->set_Atk(49 + (this->_level-1)*1.05);
        this->set_Def(49 + (this->_level-1)*1.05);

        this->set_type("Planta");
        this->set_pokemon_class("Bulbasaur");
        this->set_max_hp(this->_hp);
    };

    void ai_choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void level_up();

    //poderes:
    template<typename S>
    friend float tackle(Pokemon<S> a, Pokemon<S> &b);
    template<typename P>
    friend float razor_leaf(Pokemon<P> a, Pokemon<P> &b);
    template<typename U>
    friend float rest(Pokemon<U> &a);



};

template<typename T>
class Charmander: public Pokemon<T>{
public:
    Charmander(int level): Pokemon<T>(level)
    {
        this->_hp = 39 + (this->_level-1)*1.96;
        this->set_Atk(52 + (this->_level-1)*1.08);
        this->set_Def(43 + (this->_level-1)*0.99);

        this->set_type("Fuego");
        this->set_pokemon_class("Charmander");
        this->set_max_hp(this->_hp);

    };

    void ai_choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void level_up();

    //poderes:
    template<typename S>
    friend float scratch(Pokemon<S> a, Pokemon<S> &b);
    template<typename P>
    friend float ember(Pokemon<P> a, Pokemon<P> &b);
};

template<typename T>
class Squirtle: public Pokemon<T>{
public:
    Squirtle(int level): Pokemon<T>(level)
    {
        this->_hp = 44 + (this->_level-1)*2.01;
        this->set_Atk(48 + (this->_level-1)*1.04);
        this->set_Def(65 + (this->_level-1)*1.21);

        this->set_type("Agua");
        this->set_pokemon_class("Squirtle");
        this->set_max_hp(this->_hp);

    };

    void ai_choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void level_up();

    //poderes:
    template<typename S>
    friend float tackle(Pokemon<S> a, Pokemon<S> &b);
    template<typename P>
    friend float water_gun(Pokemon<P> a, Pokemon<P> &b);

};

template<typename T>
class Rattata: public Pokemon<T>{
public:
    Rattata(int level): Pokemon<T>(level)
    {
        this->_hp = 55 + (this->_level-1)*1.87;
        this->set_Atk(55 + (this->_level-1)*1.12);
        this->set_Def(50 + (this->_level-1)*0.91);

        this->set_type("Normal");
        this->set_pokemon_class("Rattata");
        this->set_max_hp(this->_hp);

    };

    void choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void ai_choose_attack(Pokemon<T> a, Pokemon<T> &b);
    void level_up();

    //poderes:
    template<typename P>
    friend float tackle(Pokemon<P> a, Pokemon<P> &b);

};
