#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"
#include "Livro.h"
#include "Livro.cpp"

int main( )
{
    cout << "Usando Sword no main\n";
    

    Sword royalGuardSword;
    royalGuardSword.print();

    cout << "Usando Livro no main\n";
    Livro selecaoLivro;
    selecaoLivro.print();
    
    return 0;

}