
#ifndef Professor_h
#define Professor_h

#include <string>

using namespace std;

class Professor{
    string nome;
public:
    Professor(string n): nome{n} {};
    string getName() const {
        return nome;
    };
    virtual double getSalario() = 0;
    virtual ~Professor() {};
};

class ProfHorista: public Professor {
    double nrNorasTrabalhadas;
    double valorHora;
public:
    ProfHorista(string n, double nht, double vh)
    : Professor{n}, nrNorasTrabalhadas{nht}, valorHora{vh} {};
    double getSalario() {
        return nrNorasTrabalhadas*valorHora;
    };
    virtual ~ProfHorista() {};
};

class ProfIntegral: public Professor {
    double salarioMensal;
public:
    ProfIntegral(string n, double sm)
    : Professor{n}, salarioMensal{sm} {};
    double getSalario() {
        return salarioMensal;
    };
    virtual ~ProfIntegral() {};
};

#endif /* Professor_h */
