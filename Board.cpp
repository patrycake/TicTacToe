#ifndef BOARD_CPP
#define BOARD_CPP


#include<iostream>
#include<vector>
#include"Place.cpp"
#include"Constants.cpp"


class Board{
    // Should this be implemented as a singleton?
    private:
    std::string &gameStatus;
    std::vector<std::vector<Place> > game;
    
    public:
    Board(std::string &gameStatus): gameStatus(gameStatus){
        Place place(placeStatus::empty);
        game.assign(3, std::vector<Place>(3, place));
    } 
    void checkStatus(){
       // std::cout << gameStatus << " ";
        
        for(int row = 0; row < 3; row++){
            //check the rows
            
            if(game[row][0].getStatus() == game[row][1].getStatus() && game[row][1].getStatus() == game[row][2].getStatus()){
                //std::cout << row << " " << game[row][0].getStatus() << " " << game[row][1].getStatus() << " " << game[row][2].getStatus() << std::endl;
                if(game[row][0].getStatus() == 'x'){
                    gameStatus = gameStatusTypes::xPlayerWin;
                }
                else if(game[row][0].getStatus() == 'o') {
                    gameStatus = gameStatusTypes::oPlayerWin;
                }
            }
            // checks cols
            if(game[0][row].getStatus() == game[1][row].getStatus() && game[1][row].getStatus() == game[2][row].getStatus()){
                //std::cout << row << " " << game[row][0].getStatus() << " " << game[row][1].getStatus() << " " << game[row][2].getStatus() << std::endl;
                if(game[0][row].getStatus() == 'x'){
                    gameStatus = gameStatusTypes::xPlayerWin;
                }
                else if(game[0][row].getStatus() == 'o') {
                    gameStatus = gameStatusTypes::oPlayerWin;
                }
            }
        }
        
       // gameStatus = gameStatusTypes::xPlayerWin;
        
    }
    bool add(Place place){
        game[place.getRow()][place.getCol()] = place;

        return true;
    }

    bool checkPlace(int row, int col){
        if(game[row][col].getStatus() != placeStatus::empty){
            return false;
        }
        return true;
    }
    void display(){
        std::cout << "   ";
        for(int i =0; i < 3; i++){std::cout << i << " ";}
        std::cout << std::endl;
        std::cout << "   ";
        for(int i =0; i < 3; i++){std::cout << "-" << " ";}
        std::cout << std::endl;
        for (int row = 0; row < 3; row++){
            std::cout << row << "| ";
            for(int col = 0; col < 3; col++){

                std::cout << game[row][col].getStatus() << " " ;
            }
            
            std::cout << std::endl;
        }
    }
    
    

};

#endif