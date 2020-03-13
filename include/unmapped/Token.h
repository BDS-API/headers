#pragma once

#include <string>


class Token {

public:
    bool isNumber()const; // _ZNK5Token8isNumberEv
    ~Token(); // _ZN5TokenD2Ev
    Token(std::string const&); // _ZN5TokenC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _parseRandom(); // _ZN5Token12_parseRandomEv
    void getValue(int)const; // _ZNK5Token8getValueEi
//  void compatibleWith(Token::Type)const; //TODO: incomplete function definition // _ZNK5Token14compatibleWithENS_4TypeE
    void getValueAsFloat(float)const; // _ZNK5Token15getValueAsFloatEf
    void getBool(bool)const; // _ZNK5Token7getBoolEb
    void getText(std::string const&)const; // _ZNK5Token7getTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tokenize(std::string const&); // _ZN5Token8tokenizeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Token(Token &&); // _ZN5TokenC2EOS_
};
