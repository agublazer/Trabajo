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
    cout<<"Nombre: "<<endl;
    string x;
    getline(cin,x);

    cout<<"Escoger pokemon inicial "<<endl;
    int opcion;
    cout<<"1. Pikachu"<<" 2. Bulbasaur"<<" 3. Charmander"<<" 4.Squirtle"<<endl;
    cin>>opcion;
    Pokemon<T> *player;
    int n_mov;
    switch(opcion)
    {
    case 1:
        player = new Pikachu<T>(1);
        n_mov=2;
        break;
    case 2:
        player = new Bulbasaur<T>(1);
        n_mov=3;
        break;
    case 3:
        player = new Charmander<T>(1);
        n_mov=2;
        break;
    case 4:
        player = new Squirtle<T>(1);
        n_mov=2;
        break;
    default:
        break;
    }
    player->give_name(x);
    info(*player);

    cout<<"Batalla 1"<<endl;
    Pokemon<T> *enemy;
    enemy = new Bulbasaur<T>(4);
    while(player->get_hp() != 0 and enemy->get_hp() != 0 )
    {
        if (player->get_pokemon_class() == "Pikachu")
        {
            cin>>opcion;
            switch(opcion){
            case 1:
                cout<<player->get_name()<<" usó thunder shock"<<endl;
                thunder_shock(*player,*enemy);
                cout<<"Vida del enemigo: "<<enemy->get_hp()<<endl;
                break;
            case 2:
                cout<<player->get_name()<<" usó quick attack"<<endl;
                quick_attack(*player,*enemy);
                cout<<"Vida del enemigo: "<<enemy->get_hp()<<endl;
                break;
            default:
                break;
            }
        }
    }
    if(enemy->get_hp() == 0)
        cout<<enemy->get_name()<<" perdió"<<endl;
}


