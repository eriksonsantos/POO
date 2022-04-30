#ifndef __PONTO2D_H__
#define __PONTO2D_H__

#include <iostream>
#include <vector>
using namespace std;


class Ponto2D
{

private:
    static int total_ids;
    static int nextId;
    double x;
    double y;
    int id;
    int getNextId(); 
    static vector<int> ids;
    
public:    
    Ponto2D();
    
    Ponto2D(const Ponto2D& p);
    ~Ponto2D();
    Ponto2D(double x,double y);
    void print();
    double distToOrig();
    double distTo(Ponto2D p);
    void sumOf(Ponto2D p);
    Ponto2D createSumOf(Ponto2D p);
};

#endif