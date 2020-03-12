#pragma once

#include <string>


class CommandLexer {

public:
    void next()const;
    void step();
    bool isSpace(char);
    bool isDigit(char);
    void _getSelectors()const;
    bool isIdentifierCharacter(char);
    CommandLexer(std::string const&);
};
