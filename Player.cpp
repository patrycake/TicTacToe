#ifndef PLAYER_CPP
#define PLAYER_CPP

#include<iostream>
#include"Board.cpp"
#include"Place.cpp"

class Player{
    public: 
    Player(char placeType, Board &board):placeType(placeType), board(board){ }

    void play(){
        int row, col;
    
        do{
            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cout << "Error, non-digit entered. " << std::endl;
            }

            std::cout << "Player: " << placeType << " Where do you want to place: ";
            std::cin >> row >> col;

        }while(!validPlacement(row, col) || std::cin.fail());

        // check valid here dont want to create an object with bad inputs 
        // make sure two integers and not already on the board
        // throw std::invalid_argument("...");???

        Place place(placeType, row, col);

        board.add(place);
        board.display();
        board.checkStatus();
    }
    private:
    char placeType;
    Board &board;

    bool validPlacement(int rowUser, int colUser){
       
        if(rowUser >= 3 || rowUser < 0 || colUser >= 3 || colUser < 0){
            return false;
        }
        if(!board.checkPlace(rowUser, colUser)){
            return false;
        }
        return true;
    }
};

#endif