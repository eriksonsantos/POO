#include "include/Pessoa/Pessoa.cpp"
#include "include/Amigo/Amigo.cpp"
#include "include/Conhecido/Conhecido.cpp"
#include "include/Agenda/Agenda.cpp"


int main(){
    Agenda agenda(3);
    cout << "Quantidade de Amigos: " << agenda.getAmigos() << endl;
    cout << "Quantidade de Conhecidos: " << agenda.getConhecidos() << endl;
    agenda.getVetorPessoas()[0]->setNome("Marisa");
    agenda.getVetorPessoas()[1]->setNome("Marcos");
    agenda.getVetorPessoas()[2]->setNome("Mirian");
    agenda.getVetorPessoas()[2]->setIdade(45);
    agenda.addInformacoes();
    agenda.imprimeAniversario();
    agenda.imprimeEmail();


    return 0;
    
    
}