
#ifndef Universidade_h
#define Universidade_h

#include <iostream>
#include <vector>
#include "Professor.h"

using namespace std;

class Universidade {
    vector<Professor*> professores;
    
public:
    Universidade() {};
    
    friend ostream & operator << (ostream &out, const Universidade &u);
    
    void addProfessor(Professor* prof) {
        this->professores.push_back(prof);
    }
    
    const double totalPago() const {
        double total = 0;
        for (Professor *const &prof : professores) {
            total += prof->getSalario();
        }
        return total;
    }
};



#endif /* Universidade_h */
