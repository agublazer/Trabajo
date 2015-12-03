#include"calcular_dano.cpp"

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
void Pikachu<S>::choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    cout<<"Escoger un ataque"<<endl;
    cout<<"1. Thunder shock"<<endl;
    cout<<"2. Quick attack"<<endl;
    int option;
    cin>>option;
    switch(option){
    case 1:
        thunder_shock(a,b);
        break;
    case 2:
        quick_attack(a,b);
        break;
    default:
        break;
    }
}
template<typename S>
void Pikachu<S>::ai_choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    int n;
    n = rand()%2+1;
    if (n==1)
    {
        cout<<a.get_name()<<" usó thunder shock"<<endl;
        thunder_shock(a,b);
    }
    else
    {
        cout<<a.get_name()<<" usó quick attack"<<endl;
        quick_attack(a,b);
    }
}
template<typename S>
float thunder_shock(Pokemon<S> a, Pokemon<S> &b)
{
    int base_power = 40;
    string atk_type = "Electrico";

    return atk(a,b,atk_type,base_power);

}
template<typename S>
float quick_attack(Pokemon<S> a, Pokemon<S> &b)
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
void Bulbasaur<S>::ai_choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    int n;
    n = rand()%3+1;
    if (n==1)
    {
        cout<<a.get_name()<<" usó tackle"<<endl;
        tackle(a,b);
    }
    if (n==2)
    {
        cout<<a.get_name()<<" usó razor leaf"<<endl;
        razor_leaf(a,b);
    }
    else
    {
        cout<<a.get_name()<<" usó rest"<<endl;
        rest(a);
    }
}
template<typename S>
void Bulbasaur<S>::choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    cout<<"Escoger un ataque"<<endl;
    cout<<"1. Tackle"<<endl;
    cout<<"2. Razor leaf"<<endl;
    cout<<"3. Rest"<<endl;
    int option;
    cin>>option;
    switch(option){
    case 1:
        tackle(a,b);
        break;
    case 2:
        razor_leaf(a,b);
        break;
    case 3:
        rest(a);
        break;
    default:
        break;
    }
}

template<typename S>
float tackle(Pokemon<S> a, Pokemon<S>&b)
{
    int base_power = 50;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float razor_leaf(Pokemon<S> a, Pokemon<S>&b)
{
    int base_power = 55;
    string atk_type = "Planta";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float rest(Pokemon<S> &a)
{
    if (a.get_level() <= 5)
    {
        a.heal(15);
        //return 15;
    }
    if (a.get_level() > 10)
    {
        a.heal(25);
        //return 25;
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
void Squirtle<S>::ai_choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    int n;
    n = rand()%2+1;
    if (n==1)
    {
        cout<<a.get_name()<<" usó tackle"<<endl;
        tackle(a,b);
    }
    else
    {
        cout<<a.get_name()<<" usó water gun"<<endl;
        water_gun(a,b);
    }
}
template<typename S>
void Squirtle<S>::choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    cout<<"Escoger un ataque"<<endl;
    cout<<"1. Tackle"<<endl;
    cout<<"2. Water gun"<<endl;
    int option;
    cin>>option;
    switch(option){
    case 1:
        tackle(a,b);
        break;
    case 2:
        water_gun(a,b);
        break;
    default:
        break;
    }
}

template<typename S>
float water_gun(Pokemon<S> a, Pokemon<S>&b)
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
void Charmander<S>::ai_choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    int n;
    n = rand()%2+1;
    if (n==1)
    {
        cout<<a.get_name()<<" usó scratch"<<endl;
        scratch(a,b);
    }
    else
    {
        cout<<a.get_name()<<" usó ember"<<endl;
        ember(a,b);
    }
}

template<typename S>
void Charmander<S>::choose_attack(Pokemon<S>a ,Pokemon<S> &b)
{
    cout<<"Escoger un ataque"<<endl;
    cout<<"1. Scratch"<<endl;
    cout<<"2. Ember"<<endl;
    int option;
    cin>>option;
    switch(option){
    case 1:
        scratch(a,b);
        break;
    case 2:
        ember(a,b);
        break;
    default:
        break;
    }
}

template<typename S>
float scratch(Pokemon<S> a, Pokemon<S>&b)
{
    int base_power = 40;
    string atk_type = "Normal";

    return atk(a,b,atk_type,base_power);
}

template<typename S>
float ember(Pokemon<S> a, Pokemon<S>&b)
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
void Rattata<S>::choose_attack(Pokemon<S> a ,Pokemon<S> &b)
{
    cout<<"Escoger un ataque"<<endl;
    cout<<"1. Tackle"<<endl;
    int option;
    cin>>option;
    switch(option){
    case 1:
        tackle(a,b);
        break;
    default:
        break;
    }
}
template<typename S>
void Rattata<S>::ai_choose_attack(Pokemon<S> a ,Pokemon<S> &b)
{
    cout<<a.get_name()<<"usó tackle"<<endl;
    tackle(a,b);
}
