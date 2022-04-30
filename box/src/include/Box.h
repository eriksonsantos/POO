#include "Ponto3D.cpp"

class Box{
private:
    Ponto3D dimensao;
public:
    Box(double largura =0,double altura=0, double profundidade=0){dimensao.set(largura,altura,profundidade);}
    double area();
    double volume();
    
    ~Box() {};
};
