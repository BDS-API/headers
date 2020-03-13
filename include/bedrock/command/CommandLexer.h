#pragma once

#include <string>


class CommandLexer {

public:
    bool isIdentifierCharacter(char); // _ZN12CommandLexer21isIdentifierCharacterEc
    bool isDigit(char); // _ZN12CommandLexer7isDigitEc
    bool isSpace(char); // _ZN12CommandLexer7isSpaceEc
    CommandLexer(std::string const&); // _ZN12CommandLexerC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void step(); // _ZN12CommandLexer4stepEv
    void next()const; // _ZNK12CommandLexer4nextEv
    void _getSelectors()const; // _ZNK12CommandLexer13_getSelectorsEv
};
