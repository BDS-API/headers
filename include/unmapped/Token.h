#pragma once

class Token {

public:

    bool isNumber(void)const;
    Token(std::string const&);
    void _parseRandom(void);
    void getValue(int)const;
    void compatibleWith(Token::Type)const;
    void getValueAsFloat(float)const;
    void getBool(bool)const;
    void getText(std::string const&)const;
    void tokenize(std::string const&);
    Token(Token&&);
};
