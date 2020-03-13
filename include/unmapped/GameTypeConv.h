#pragma once

#include <string>


namespace GameTypeConv {

//  std::string gameTypeToString(GameType); //TODO: incomplete function definition // _ZN12GameTypeConv16gameTypeToStringB5cxx11E8GameType
//  std::string gameTypeToNonLocString(GameType); //TODO: incomplete function definition // _ZN12GameTypeConv22gameTypeToNonLocStringB5cxx11E8GameType
    void stringToGameType(std::string const&); // _ZN12GameTypeConv16stringToGameTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void stringToIndividualGameType(std::string const&); // _ZN12GameTypeConv26stringToIndividualGameTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void intToGameType(int); // _ZN12GameTypeConv13intToGameTypeEi
};
