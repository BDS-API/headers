#pragma once

#include <string>


namespace GameTypeConv {

    void intToGameType(int);
    void stringToIndividualGameType(std::string const&);
//  std::string gameTypeToString(GameType); //TODO: incomplete function definition
//  std::string gameTypeToNonLocString(GameType); //TODO: incomplete function definition
    void stringToGameType(std::string const&);
};
