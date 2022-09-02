#include <iostream>
using std::cout;
#include "Livro.h"
#include <string>
using std::string;




Livro::Livro( )
{
   cout << "Inicializando Livro no constructor.\n";
   titulo = "A Selecao";
   ano = 2012;
   genero = "Romance";
   autor = "Kiera Cass"
   
}

Livro::~Livro( )
{  

}

void Livro::print( ) const
{
    cout << "Titulo: "   << titulo << '\n';
    cout << "Genero: "   << genero << '\n';
    cout << "Autor: "   << autor << '\n';
    cout << "Ano: " << ano << '\n';
}