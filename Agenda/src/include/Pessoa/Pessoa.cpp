#include "Pessoa.h"

Pessoa::Pessoa(){
    this->nome = "indefinido";
    this->idade = 0;
}

Pessoa::Pessoa(string nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

Pessoa::~Pessoa(){};

void Pessoa::addInformacao(){};

string Pessoa::getInformacao(){
    return "indefinida";
};

int Pessoa::getIdade(){
    return this->idade;
}

string Pessoa::getNome(){
    return this->nome;
}

void Pessoa::setIdade(int novaIdade){
    this->idade = novaIdade;
}

void Pessoa::setNome(string novoNome){
    this->nome = novoNome;
}

