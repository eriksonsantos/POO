
#ifndef Funcao_h
#define Funcao_h

#include <iostream>
#include <cmath>

class Funcao {
    public:
    //funcao que obtem a integral da funcao pela regra do trapezio
    double getIntegral(double limiteInferior, double limiteSuperior, double intervalos) {
        double area = 0;
        double last_value = func(limiteInferior);
        double new_value;
        double span = (limiteSuperior-limiteInferior) / intervalos;
        for (int i = 1; i <= intervalos; i++) {
            new_value = func(limiteInferior + span*i);
            area += span*(new_value+last_value)/2; // func(n)*span - (func(n) - func(l))*span/2
            last_value = new_value;
        }
        return area;
    };
    // funcao virtual representando a funcao cuja integral deve ser calculada
    virtual double func(double input) = 0;
    // destrutor
    virtual ~Funcao(){};
};

class Quadratica: public Funcao {
    double a, b, c;
    
public:
    Quadratica(double a, double b, double c): a{a}, b{b}, c{c} {};
    
    double func(double input) {
        return a*input*input + b*input + c;
    }
    
    ~Quadratica() {};
};

class Senoide: public Funcao {
public:
    Senoide() {};
    
    double func(double input) {
        return sin(input)/input;
    };
    
    ~Senoide() {};
};

class Linear: public Funcao {
    double a, b;
    
public:
    Linear(double a, double b): a{a}, b{b} {};
    
    double func(double input) {
        return a*input + b;
    }
    
    ~Linear() {};
};

#endif /* Funcao_hp */
