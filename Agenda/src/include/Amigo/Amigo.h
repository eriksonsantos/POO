#ifndef __AMIGO_H__
#define __AMIGO_H__

#include "../Pessoa/Pessoa.h"

class Amigo: public Pessoa{
    private:
    string aniversario;
    //string tipo;

    public:

    // Construtor e Destrutor
    Amigo();
    ~Amigo();

    // Getter e Setter
    string getAniversario();
    void setAniversario(string novoAniversario);
    //string getTipo();
    
    
    void addInformacao();       // virtual
    string getInformacao();     // virtual

};
#endif // __AMIGO_H__