#pragma once

class CommandLexer {

public:

    bool isIdentifierCharacter(char);
    bool isDigit(char);
    bool isSpace(char);
    void CommandLexer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void step(void);
    void next(void)const;
    void _getSelectors(void)const;
};
