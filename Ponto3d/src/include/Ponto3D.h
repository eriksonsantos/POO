#include "Ponto2D.cpp"

class Ponto3D: public Ponto2D{
    
    public:

    friend ostream& operator<< (ostream &op, Ponto3D &p);
    Ponto3D(double xx =0,double yy =0,double zz =0): Ponto2D(xx,yy),z(zz) {};
    Ponto3D& operator= ( Ponto3D &p);
    Ponto3D& operator= ( Ponto2D &p);
    double get_z(void) { return z; };
    void set (double nx, double ny,double nz) ;
    
    ~Ponto3D(){};

    private:
        double z;

            
};