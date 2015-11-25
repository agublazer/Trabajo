#include"pokemones.h"

int main()
{

    Pikachu<long> David(4);
    cout<<"Pokemon creado"<<endl;

    string name = "";
    cout<<"¿Qué nombre quieres darle?"<<endl;
    getline(cin,name);
    David.give_name(name);

    cout<<"El pokemon tiene: "<<endl;
    cout<<"Vida: "<<David.get_hp()<<endl;
    cout<<"Exp: "<<David.get_exp()<<endl;

    David.level_up();
    cout<<David.get_level()<<endl;
    cout<<"Tu pokemon es de tipo "<<David.get_type()<<endl;

}
