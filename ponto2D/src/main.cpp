#include "include/Ponto2D.cpp"

int main(){

    // Ponto2D p;
    // Ponto2D p2(3,2);
    // Ponto2D p3(1,4);
    // cout << p3.distTo(p2)<< endl;
    // cout << p3.distToOrig() << endl;
    // p3.sumOf(p3);
    // Ponto2D p4 = p3.createSumOf(p);

    // p3.print();
    // p2.~Ponto2D();
    // p.print();

    Ponto2D p1(2,3);
    Ponto2D p3(p1);
    Ponto2D p4 = p3;
    p1.print();
    p3.print();
    p4.print();

    return 0;
}