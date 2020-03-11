#pragma once

#include "./Token.h"
#include <string>


class Token {

public:

    bool isNumber()const;
    ~Token();
    Token(std::string const&);
    void _parseRandom();
    void getValue(int)const;
//  void compatibleWith(Token::Type)const; //TODO: incomplete function definition
    void getValueAsFloat(float)const;
    void getBool(bool)const;
    void getText(std::string const&)const;
    void tokenize(std::string const&);
    Token(Token &&);
};
