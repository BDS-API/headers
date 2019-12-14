#pragma once

class CommandRegistry::Parser {

public:

    void Parser(CommandRegistry const&, int);
    void parse(std::string const&);
    void _findParsePrediction(CommandRegistry::LexicalToken const&, CommandRegistry::Symbol const&)const;
    void createCommand(CommandOrigin const&);
};
