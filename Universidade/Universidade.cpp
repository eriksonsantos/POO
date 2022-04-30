#include "Universidade.h"

ostream & operator << (ostream &out, const Universidade &u)
{
    for (Professor* const &prof : u.professores) {
        out << "Nome: " << prof->getName() << endl << "Salario: " << prof->getSalario() << endl << "--------" << endl;
    }

    return out;
}
