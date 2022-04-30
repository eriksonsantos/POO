#ifndef __AGENDA_H__
#define __AGENDA_H__

#include "../Pessoa/Pessoa.h"
#include "../Amigo/Amigo.h"
#include "../Conhecido/Conhecido.h"
#include <vector>
#include <random>


class Agenda{

    private:
    int quantidadePessoas = 0;
    int quantidadeAmigos = 0;
    int quantidadeConhecidos = 0;
    std::vector<Pessoa*> vetorPessoas;

    public:
    Agenda(int quantidadePessoas);
    ~Agenda();
    int getAmigos();
    int getConhecidos();
    int getPessoas();
    std::vector<Pessoa*> getVetorPessoas();
    void addInformacoes();
    void imprimeAniversario();
    void imprimeEmail();

};



#endif // __AGENDA_H__