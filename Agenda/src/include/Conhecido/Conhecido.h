#ifndef __CONHECIDO_H__
#define __CONHECIDO_H__

#include "../Pessoa/Pessoa.h"


class Conhecido: public Pessoa{
    private:
    string email;
    //string tipo;

    public:
    Conhecido();
    ~Conhecido();

    void addInformacao();   // virtual
    string getInformacao(); // virtual

    string getEmail();
    void setEmail(string email);
};

#endif // __CONHECIDO_H__