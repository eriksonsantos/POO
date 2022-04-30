#include <iostream>
#include <fstream>
class Matrix {
    private:

        double** m; // m é um array 2D a ser implementado como um pointer de pointers
        int nRows;  // numero de linhas
        int nCols;  //  numero de colunas

    public:

        // Construtores
        Matrix(); 
        void aux(double **matrizAux);

        Matrix(int rows, int cols, double value);
        Matrix(const Matrix& m);
        // destrutor
        ~Matrix();
    
        // basic getters
        int getRows() const;
        int getCols() const;
        double get(int row,int col) const;
        // other methods
        Matrix transpose();
        void print() const;
        void zeros();
        void ones();
        void unit();
        
};