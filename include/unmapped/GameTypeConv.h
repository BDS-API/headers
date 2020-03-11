#pragma once

#include <string>


class GameTypeConv {

public:

//  std::string gameTypeToString(GameType); //TODO: incomplete function definition
//  std::string gameTypeToNonLocString(GameType); //TODO: incomplete function definition
    void stringToGameType(std::string const&);
    void stringToIndividualGameType(std::string const&);
    void intToGameType(int);
};
