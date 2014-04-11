#include "matriz.h"
#include <iostream>
#include <QString>

using namespace std;

Matriz::Matriz()
{
}


void Matriz:: create(const int columns,const int rows){
    this->content = new double*[columns];
    for (int i = 0; i< rows; ++i){
        this->content[i] = new double[rows];
    }
    this->columns = columns;
    this->rows = rows;
}

void Matriz:: setElementAt(int column, int row, double value) const{
    this->content[column][row]= value;
}

double Matriz:: elementAt(int column, int row){
    return this->content[column][row];
}

//void Matriz:: sub(const MatrixADT &other){}

void Matriz:: multiplyBy(double k){
    for(int j = 0; j< rows; ++j){
        for(int i= 0; i< columns; ++i){
            cout << this->content[j][i]*k << " ";
        }
        cout << endl;
    }
}
double Matriz:: determinant(){
    float det = 1, det1 =1;
    for (int j= 0; j< rows; ++j){
        for (int i=0; i< columns; ++i){
            if (i==j){
                det *= content[j][i];
            }else{
                det1 *= content[j][i];}
            }
        }


  return det - det1;
}

/*Matriz:: MatrixADT * transpose(){
    double aux;
    for(int j = 0; j< * rows; ++j){
        for(int i= 0; i< * columns; ++i){
            if ((i!=j)&&(j<i)){
               aux = content[j][i];
               content[j][i]= content[i][j];
               cout << content[i][j] = aux;
            }
            cout<< endl;
        }
    }
}*/

/*QString Matriz:: toString(){}*/


void Matriz::print(){
    for(int j = 0; j< rows; ++j){
        for(int i= 0; i< columns; ++i){
            cout << this->content[j][i]<< " ";
        }
        cout << endl;
    }


}
