#include "Box.h"

double Box::area(){

   double area = 0;
   area = 2*this->dimensao.get_x()* dimensao.get_y()+2*dimensao.get_y()*dimensao.get_z();
   area+= +2* dimensao.get_x()*dimensao.get_z();

   return area;
} 

double Box::volume(){

   return dimensao.get_x()*dimensao.get_y()*dimensao.get_z();
} 