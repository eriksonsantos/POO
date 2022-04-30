#include "Conhecido.h"

Conhecido::Conhecido(){
    this->email = "indefinido";
    // this->tipo = "Conhecido";
}

Conhecido::~Conhecido(){}


string Conhecido::getEmail(){
    return this->email;
}

void Conhecido::setEmail(string email){
    this->email = email;
}

void Conhecido::addInformacao(){
    cout << "Digite o e-mail do Conhecido " << this->getNome() << " (exemplo@email.com): ";
    cin >> this->email;
}

string Conhecido::getInformacao(){    
    return this->getEmail();
}


