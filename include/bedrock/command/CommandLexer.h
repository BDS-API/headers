#pragma once

#include <string>


class CommandLexer {

public:
    CommandLexer(std::string const&);
    void step();
    void _getSelectors()const;
    bool isIdentifierCharacter(char);
    void next()const;
    bool isSpace(char);
    bool isDigit(char);
};
