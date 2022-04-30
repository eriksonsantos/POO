#include <iostream>
using namespace std;

class Pager
{
private:
    string pager;
public:
    Pager();
    Pager(string s):pager(s){};
    Pager & operator= (Pager x){pager = x.pager; return *this;};
    string get(){return pager;}
    ~Pager(){};
    void set(string s){pager = s;}
};




