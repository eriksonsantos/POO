#include <iostream>
using namespace std;

class Traveler
{
protected:
    string travel;
public:
    Traveler(string s):travel(s){};
    Traveler & operator= (Traveler x){travel = x.travel; return *this;}
    ~Traveler(){};
    void set(string s){travel = s;}
    string get(){return travel;}
};




