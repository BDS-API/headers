#pragma once



class CommandLexer {

public:

    bool isIdentifierCharacter(char);
    bool isDigit(char);
    bool isSpace(char);
    CommandLexer(std::string const&);
    void step();
    void next()const;
    void _getSelectors()const;
};
