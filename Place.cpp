#ifndef PLACE_CPP
#define PLACE_CPP

#include<iostream>

class Place{
    private:
    char status;
    int row;
    int col;

    public:
    Place(char status):status(status){}
    Place(char status, int row, int col):status(status), row(row), col(col){
        
    }
    char getStatus(){return status;}
    int getRow(){return row;}
    int getCol(){return col;}


};

#endif