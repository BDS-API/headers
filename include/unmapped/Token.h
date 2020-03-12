#pragma once

#include <string>


class Token {

public:
    void getValue(int)const;
    void getText(std::string const&)const;
    void getValueAsFloat(float)const;
    void _parseRandom();
    Token(std::string const&);
    ~Token();
    void tokenize(std::string const&);
//  void compatibleWith(Token::Type)const; //TODO: incomplete function definition
    void getBool(bool)const;
    Token(Token &&);
    bool isNumber()const;
};
