#ifndef __PESSOA_H__
#define __PESSOA_H__

#include <iostream>
#include <string>

using namespace std;

class Pessoa{

private:
    int idade;
    string nome;

public:

    // Construtores e Destrutor
    Pessoa();
    Pessoa(string nome, int idade);
    virtual ~Pessoa();

    // Getters e Setters (if virtual => late binding)
    int getIdade();
    string getNome();
    void setIdade(int novaIdade);
    void setNome(string novoNome);
    
    virtual void addInformacao();
    virtual string getInformacao();
};



#endif // __PESSOA_H__