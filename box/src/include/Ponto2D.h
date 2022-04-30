#include<iostream> 
using namespace std;
class Ponto2D{
    
     public:
        
        Ponto2D(double xx =0,double yy =0): x(xx),y(yy){};
        friend ostream& operator<< (ostream &op, const Ponto2D &p);
        Ponto2D& operator= (const Ponto2D &p);
        void set (double nx, double ny) { x=nx; y=ny; }
        double get_x(void) { return x; }
        double get_y(void) { return y; }
        ~Ponto2D(){};
    protected:
        void set_x(double nx){x = nx;}
        void set_y(double ny){y = ny;}
    private:
        double x;
        double y;

    
                  
  
};