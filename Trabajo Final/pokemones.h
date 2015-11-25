#include"base_pokemon.cpp"

template<typename T>
class Pikachu: public Pokemon<T>{
public:
    Pikachu(int level): Pokemon<T>(level)
    {
        this->set_type("electrico");
        this->set_pokemon_class("Pikachu");
    };
};
