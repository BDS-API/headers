#pragma once

class CommandRegistry::Parser {

public:

    void Parser(CommandRegistry const&, int);
    void parse(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _findParsePrediction(CommandRegistry::LexicalToken const&, CommandRegistry::Symbol const&)const;
    void createCommand(CommandOrigin const&);
};
