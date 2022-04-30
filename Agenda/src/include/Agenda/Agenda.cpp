#include "Agenda.h"


Agenda::Agenda(int quantidadePessoas){
    // sorteando aleatóriamente entre 1 e 2;
    random_device random;
    mt19937 gen(random());
    uniform_int_distribution<> distr(1,2);

    for (int i = 0; i < quantidadePessoas; i++){
        int aleatorio = distr(gen);
        // cout << aleatorio << endl;

        if (aleatorio == 1)
        {
            Amigo *amigo = new Amigo;
            this->vetorPessoas.push_back(amigo);
            this->quantidadeAmigos++;
        }
        if (aleatorio == 2)
        {
            Conhecido *conhecido = new Conhecido;
            this->vetorPessoas.push_back(conhecido);
            this->quantidadeConhecidos++;
        }
    }
}

Agenda::~Agenda() 
{
    for (int i = 0; i < this->vetorPessoas.size(); i++)
    {
        delete this->vetorPessoas[i];
    }
    
}

int Agenda::getAmigos() 
{
    return quantidadeAmigos;
}

int Agenda::getConhecidos() 
{
    return quantidadeConhecidos;
}

int Agenda::getPessoas() 
{
    return quantidadeConhecidos;
}

std::vector<Pessoa*> Agenda::getVetorPessoas() 
{
    return vetorPessoas;
}

void Agenda::addInformacoes(){
    // todas as pessoas vão receber as informações.
    for (int i = 0; i < this->vetorPessoas.size(); i++){
        this->vetorPessoas[i]->addInformacao();
        
    }
    
}

void Agenda::imprimeAniversario(){
    cout << "Encontrado(s) " << this->quantidadeAmigos << " amigo(s).";
    if (this->quantidadeAmigos != 0) {cout << "Seguem abaixo os aniversarios:" << endl;
        for (int i = 0; i < this->vetorPessoas.size(); i++){
            string informacao = this->vetorPessoas[i]->getInformacao();
            // como filtrar pra ser apenas aniversários(?)
            if (informacao.rfind('@') == string::npos){
                cout << informacao << endl;
            }
        }
        cout << endl;
    }
}

void Agenda::imprimeEmail(){
    cout << "Encontrado(s) " << this->quantidadeConhecidos << " conhecido(s).";
    if (this->quantidadeAmigos != 0) {cout << "Seguem abaixo os emails:" << endl;
        for (int i = 0; i < this->vetorPessoas.size(); i++){
            string informacao = this->vetorPessoas[i]->getInformacao();
            // como filtrar pra ser apenas aniversários(?)
            if (informacao.rfind('@') != string::npos){
                cout << informacao << endl;
            }
        }
        cout << endl;
    }
}