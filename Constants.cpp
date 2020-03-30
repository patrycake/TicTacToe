#ifndef CONSTANTS_CPP
#define CONSTANTS_CPP

#include<iostream>



namespace placeStatus{
    static const char x = 'x';
    static const char o = 'o';
    static const char empty = 'e';
};

namespace gameStatusTypes{
    static const std::string xPlayerWin = "Congratulations Player X you Won!";
    static const std::string oPlayerWin = "Congratulations Player O you Won!";
    static const std::string gameInProgress = "gameInProcess";
    static const std::string gameTie = "Game Tied!";
};

#endif