#pragma once

using namespace CommandRegistry;

class Parser {

public:

    Parser(CommandRegistry const&, int);
    void parse(std::string const&);
    void _findParsePrediction(CommandRegistry::LexicalToken const&, CommandRegistry::Symbol const&)const;
    void createCommand(CommandOrigin const&);
};
