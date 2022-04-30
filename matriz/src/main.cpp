#include "include/matrix.cpp"
#include <fstream>


int main()
{
    Matrix Y(3,2,4);
    Matrix X(3,3);
    Matrix A(X);

    fstream in;
    in.open("myMatrix.txt",fstream::in|fstream::out|fstream::app);

    
    int n,m;
    in >> n >> m;
    double **matrizAux;
    matrizAux = new double*[n];
    for(int i =0; i<n;i++){
      matrizAux[i] = new double[m];
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            in >> matrizAux[i][j];
        }
    }


    Matrix B(n,m,0.0);
    B.aux(matrizAux);

    std::cout << "Y:: " << std::endl;
    Y.print();
    std::cout << "\nB:: " << std::endl;
    B.print();
    std::cout << "\nNumero de linhas de Y:: " << Y.getRows() << endl;
    std::cout << "Numero de colunas de Y:: " << Y.getCols() << endl;
   
    std::cout << "\nZ é transposta de Y:: " << std::endl;
    
    Matrix Z = Y.transpose();
    Z.print();
    std::cout << "\nNumero de linhas de Z:: " << Z.getRows() << endl;
    std::cout << "Numero de colunas de Z:: " << Z.getCols() << endl;
    
    std::cout << std::endl << "X:: " << std::endl;
    X.print();

    std::cout << std::endl << "A:: " << std::endl;
    A.print();

    std::cout << "\nNumero de linhas de X:: " << X.getRows() << endl;
    std::cout << "Numero de colunas de X:: " << X.getCols() << endl;
   
    std::cout << "\nElemento da posição row:1 col:1 é: " << X.get(1,1)<< endl;
    std::cout << "\nMatriz só com elementos ums: " << endl; 
    X.ones();

    X.print();
    std::cout << "\nMatriz só com elementos zeros: " << endl; 
    X.zeros();
    X.print();

    std::cout << "\nMatriz Identidade: " << endl; 
    X.unit();
    X.print();

    in.close();
    
    return 0;
}