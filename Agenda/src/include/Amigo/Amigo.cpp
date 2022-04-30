#include "Amigo.h"


Amigo::Amigo(){
    this->aniversario = "indefinido";
    // this->tipo = "Amigo";

}

Amigo::~Amigo() 
{
    
}

string Amigo::getAniversario() 
{
    return this->aniversario;
}

void Amigo::setAniversario(string novoAniversario) 
{
    this->aniversario = novoAniversario;
}

void Amigo::addInformacao(){
    cout << "Digite o aniversário do Amigo " << this->getNome() << " (dd/mm/aa): ";
    cin >> this->aniversario;
    // string setAniversario;
    // this->setAniversario(setAniversario);
}

string Amigo::getInformacao(){
    return this->getAniversario();
};
