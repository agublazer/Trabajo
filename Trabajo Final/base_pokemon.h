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
    T _limit1;
    T _limit2;
public:
    //constructor:
    Pokemon(int level);

    //conseguir valores:
    T get_hp(){return _hp;}
    T get_exp(){return _exp;}
    int get_level(){return _level;}
    string get_name(){return _name;}
    string get_type(){return _type;}
    string get_pokemon_class(){return _pokemon_class;}

    //modificar valores:
    void set_type(string n);
    void set_pokemon_class(string n);

    //funciones básicas:
    void give_name(string name);
    void level_up();
    //void gain_exp(T n);
    //void
};
