#include "Ponto3D.h"

ostream& operator<< (ostream &op, Ponto3D &p){
            op << endl;
            op << "x = " << p.get_x() << endl;
            op << "y = " << p.get_y() << endl;
            op << "z = " << p.z << endl;
            return op;
}

Ponto3D& Ponto3D::operator= ( Ponto3D &p){
    
    this->set_x(p.get_x());
    this->set_y(p.get_y());
    z = p.z;
    return *this;
}

Ponto3D& Ponto3D::operator= ( Ponto2D &p){
    
    this->set_x(p.get_x());
    this->set_y(p.get_y());
    z = 0;
    return *this;
}

void Ponto3D::set (double nx, double ny,double nz){

    this->set_x(nx);
    this->set_y(ny);
    this->z = nz;
    

}

