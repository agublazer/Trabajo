#include"pokemones.cpp"
typedef float T;

void info(Pokemon<T> a)
{
    cout<<"Información: "<<endl;
    cout<<"Nombre: "<<a.get_name()<<endl;
    cout<<"Clase: "<<a.get_pokemon_class()<<endl;
    cout<<"Nivel: "<<a.get_level()<<endl;
    cout<<"Tipo: "<<a.get_type()<<endl;
    cout<<"Vida: "<<a.get_hp()<<endl;
    cout<<"Ataque: "<<a.get_Atk()<<endl;
    cout<<"Defensa: "<<a.get_Def()<<endl;
}
int main()
{
    cout<<"Nombre de tu pokemon: "<<endl;
    string n;
    getline(cin,n);
    int option;
    cout<<"Escoge un pokemon: "<<endl;
    cout<<"1. Pikachu 2.Bulbasaur 3.Squirtle 4.Charmander"<<endl;
    cin>>option;
    Pokemon<T> *player;
    Pokemon<T> *enemy;
    enemy = new Charmander<T>(18);

    switch(option){
    case 1:
        player = new Pikachu<T>(12);
        break;
    case 2:
        player = new Bulbasaur<T>(12);
        break;
    case 3:
        player = new Squirtle<T>(12);
        break;
    case 4:
        player = new Charmander<T>(12);
        break;
    default:
        break;
    }
    player->give_name(n);
    cout<<"PRIMERA BATALLA"<<endl;
    while(player->get_hp() != 0 and enemy->get_hp()!= 0)
    {
        player->choose_attack(*player,*enemy);
        cout<<"Vida del jugador: "<<player->get_hp()<<endl;
        cout<<"Vida del enemigo: "<<enemy->get_hp()<<endl;

        cout<<endl;
        cout<<endl;

        enemy->ai_choose_attack(*enemy,*player);
        cout<<"Vida del jugador: "<<player->get_hp()<<endl;
        cout<<"Vida del enemigo: "<<enemy->get_hp()<<endl;

        cout<<endl;
        cout<<endl;

    }
    if (player->get_hp()==0)
        cout<<player->get_name()<<" perdió "<<endl;
    else
        cout<<enemy->get_name()<<" perdió "<<endl;
}



