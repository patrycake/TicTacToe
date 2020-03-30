#include<iostream>
#include<string>
#include<vector>

#include"Place.cpp"
#include"Player.cpp"
#include"Constants.cpp"
#include"Board.cpp"




void display(std::vector<std::vector<Place> > board){

}
std::string check(std::vector<std::vector<Place> > board){

    return gameStatusTypes::gameInProgress;
}


int main(){
    std::string gameStatus = gameStatusTypes::gameInProgress;

    std::cout << "Welcome to Tic Tac Toe" << std::endl;
    
    Board board(gameStatus);

    Player xPlayer(placeStatus::x, board), oPlayer(placeStatus::o, board);
    board.display();

    while(gameStatus == gameStatusTypes::gameInProgress ){
         
        xPlayer.play();
       // std::cout << gameStatus << " ";
        if(gameStatus != gameStatusTypes::gameInProgress ){
            break;
        }
        oPlayer.play();
       // std::cout << gameStatus << " ";
    }
    std::cout <<std:: endl;
    std::cout << gameStatus << std::endl;

    
    return 0;
}