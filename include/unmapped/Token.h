#pragma once

#include <string>


class Token {

public:
    ~Token();
    Token(std::string const&);
    bool isNumber()const;
    void getValue(int)const;
    void _parseRandom();
    void getBool(bool)const;
    Token(Token &&);
//  void compatibleWith(Token::Type)const; //TODO: incomplete function definition
    void tokenize(std::string const&);
    void getValueAsFloat(float)const;
    void getText(std::string const&)const;
};
