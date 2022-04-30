#include <iostream>

#include "Universidade.h"
#include "Professor.h"

int main(int argc, const char * argv[]) {
    Universidade universidade = Universidade();
    ProfHorista* profh1 = new ProfHorista("Joao", 120, 15.5);
    ProfHorista* profh2 = new ProfHorista("Maria", 160, 35.2);
    ProfIntegral* profi = new ProfIntegral("Ana", 2321.80);
    
    universidade.addProfessor(profh1);
    universidade.addProfessor(profh2);
    universidade.addProfessor(profi);
    
    cout << universidade;
    cout << "Total pago: " << universidade.totalPago() << endl;
    
    return 0;
}
