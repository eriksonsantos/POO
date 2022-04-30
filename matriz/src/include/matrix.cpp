// contrutor default - cria uma matriz vazia com nRows = nCols = 0  
#include "matrix.h"

using namespace std;

//Constructor
Matrix::Matrix(){
    
    this->nCols = 0;
    this->nRows = 0;
    
}

Matrix::Matrix(const Matrix& m){

    this->nCols = m.nCols;
    this->nRows = m.nRows;
    this->m = m.m;


}

Matrix::Matrix(int nRows,int nCols,double value =0.0){
    
    this->nCols = nCols;
    this->nRows = nRows;
    
    this->m = new double*[nRows];

    for(int i =0; i<nRows;i++){

      this->m[i] = new double[nCols];

    }
    for(int i = 0; i < nRows;i++){
        for(int j = 0; j< nCols;j++){
            this->m[i][j] = value;

        }
    }
    
}
//Destructor

Matrix::~Matrix(){

    delete [] m;
    this->nCols=0;
    this->nRows=0;
    
    
}

//Função auxiliar
void Matrix::aux(double **matrizAux){

    this->m = matrizAux;
}

// obtem o numero de linhas
int Matrix::getRows() const {
    return this->nRows;

}

// obtem o numero de colunas
int Matrix::getCols() const {
    return this->nCols;
}

void Matrix::print() const {
    for(int i = 0; i < nRows;i++){
        for(int j = 0; j< nCols;j++){
            cout << this->m[i][j] << " ";

        }
        cout << endl;
    }
}

// retorna uma matriz transposta
Matrix Matrix::transpose() {
    
    Matrix transposta;
    transposta.nCols = this->nRows;
    transposta.nRows= this->nCols;
    
    int x = transposta.nCols;
    int y = transposta.nRows;
    
    transposta.m = new double*[y];

    for(int i =0; i<x;i++){

      transposta.m[i] = new double[x];

    }

    for(int i = 0; i < y;i++){
        for(int j = 0; j< x;j++){
           transposta.m[i][j] = this->m[j][i];

        }
    }

    return transposta;
    
}

double Matrix::get(int row,int col) const{

    if(this->m[row][col]){
        return  this->m[row][col];
    }

}

void Matrix::ones(){

    int n = this->nRows;
    int m = this->nCols;
    
    for(int i =0; i < n; i++){
        for(int j=0; j< m;j++){

            this->m[i][j] = 1;
        }
    }

}

void Matrix::zeros(){

    int n = this->nRows;
    int m = this->nCols;
    
    for(int i =0; i < n; i++){
        for(int j=0; j< m;j++){

            this->m[i][j] = 0;
        }
    }

}

void Matrix::unit(){

    int n = this->nRows;
    int m = this->nCols;
    
    for(int i =0; i < n; i++){
        for(int j=0; j< m;j++){

           if(i == j){

               this->m[i][j] = 1;
           }
           else{
               this->m[i][j] = 0;
           }
        }
    }

}

    