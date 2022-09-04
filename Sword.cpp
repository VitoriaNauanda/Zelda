#include <iostream>
using std::cout;

#include "Sword.h"

Sword::Sword( )
{
   cout << "Inicializando Sword no constructor.\n";
   strength = 48;
   durability = 14;
}

Sword::~Sword( )
{  

}
double Sword::reduzirForca(double Strength) const{
    double forcaReduzida;
   
    forcaReduzida = Strength - 2;
    
    return forcaReduzida;    
}
void Sword::print( ) const
{
    double redForca = reduzirForca(strength);
    cout << "Strength: "   << strength << '\n';
    cout << "Durability: " << durability << '\n';
    cout << "Força Reduzida:" << redForca << '\n';
}

