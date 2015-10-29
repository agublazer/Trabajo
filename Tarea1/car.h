#include"vehicle.h"

class Car : public Vehicle {
    string style ;
public :
    Car( const string & myLicense , const int myYear , const string nombre,const string &myStyle )
        : Vehicle ( myLicense , myYear, nombre), style ( myStyle ) {}
    const string & getStyle () { return style ;}
};
