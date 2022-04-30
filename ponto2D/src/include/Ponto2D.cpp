#include "Ponto2D.h"
#include <math.h>

vector<int> Ponto2D::ids;
int Ponto2D::total_ids = 0;

//CONSTRUCTOS

Ponto2D::Ponto2D(const Ponto2D& p): id(this->getNextId()){

    this->x = p.x;
    this->y = p.y;

    total_ids++;
    ids.push_back(id);
}

Ponto2D::Ponto2D(): id(this->getNextId()){

    this->x = 0;
    this->y = 0;
    //current_id++;
    total_ids++;
    ids.push_back(id);
}

Ponto2D::Ponto2D(double x,double y): id(this->getNextId()){

    this->x = x;
    this->y = y;
    //current_id++;
    total_ids++;
    ids.push_back(id);
    
}



//DESTRUCTOR
Ponto2D::~Ponto2D(){

    int position = -1;
    int size = this->ids.size();
    for(int i=0; i< size;i++){
        if(this->ids[i] == this->id)
            position = i;
    }

    if(position != -1){
        this->x = 0;
        this->y = 0;
        this->ids.erase(this->ids.begin() + position);
        total_ids--;
    }
    
}


int Ponto2D::getNextId(){
    int nextRandomId;
    //gerar aleatoriamente um número
    if (total_ids > 0){
        long unsigned int notEqual;
        bool equal = true;
        while (equal == true){
            int aleatorio = rand() % 1000;
            //comparar com os demais

            for (long unsigned int i = 0; i <= ids.size(); i++){
                if (ids[i] != aleatorio){
                    notEqual++;
                };
            };
            if(notEqual > ids.size()){
                nextRandomId = aleatorio;
                equal = false;
            };  
        };
    }
    else {
        nextRandomId = rand() % 1000;
    }
    return nextRandomId;
}


void Ponto2D::print(){
    std::cout << "x: " << this->x << ", y: " << this-> y << ";" << " id: " << id << ";" << std::endl;
}

double Ponto2D::distToOrig(){
    double distancia;
    distancia = pow ( pow(this->x,2) + pow(this->y,2),1.0/2 );
    return distancia;
}

double Ponto2D::distTo(Ponto2D p){    
    double distancia;
    distancia = pow ( pow(this->x - p.x,2) + pow(this->y - p.y,2),1.0/2 );
    return distancia;  
}

void Ponto2D::sumOf(Ponto2D p){
    this->x += p.x;
    this->y += p.y;
   // return *this;
}

Ponto2D Ponto2D::createSumOf(Ponto2D p){
    double xp3 = this->x + p.x;
    double yp3 = this->y + p.y;
    Ponto2D p3(xp3,yp3);
    return p3;
}

