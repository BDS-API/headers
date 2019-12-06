#pragma once

class Token {

public:

    bool isNumber(void)const;
    void Token(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _parseRandom(void);
    void getValue(int)const;
    void compatibleWith(Token::Type)const;
    void getValueAsFloat(float)const;
    void getBool(bool)const;
    void getText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void tokenize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Token(Token&&);
};
