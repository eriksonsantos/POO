#include "Traveler.h"
#include "Pager.h"

class BusinessTraveler: public Traveler
{
private:
    Pager Bussinesspager;
public:
    BusinessTraveler(string s = "1"):Traveler(s),Bussinesspager(s){};
     BusinessTraveler & operator= (BusinessTraveler z){
         Bussinesspager = z.Bussinesspager;travel = z.travel; return *this;}
    
    BusinessTraveler & operator= (string x){Bussinesspager.set(x); this->set(x); return *this; }

    friend ostream& operator<< (ostream &op, BusinessTraveler &p){
        op <<"Pager: " << p.Bussinesspager.get()<< endl;
        op<<"Travel: "<<p.get()<< endl;

        return op;
    }

    ~BusinessTraveler(){};
};
