#ifndef LIVRO_H
#define LIVRO_H
#include <string.h>
using std::string;

class Livro
{
public:
    Livro();
    ~Livro();

    void print( ) const;

private:

    string titulo;
    string genero;
    string autor; 
    int ano;


};

#endif // LIVRO_H