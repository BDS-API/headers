#pragma once

#include "./Symbol.h"


namespace CommandRegistry {

class Symbol {

public:

    Symbol();
    Symbol(unsigned long);
//  Symbol(CommandLexer::TokenType); //TODO: incomplete function definition
//  Symbol(CommandRegistry::HardNonTerminal); //TODO: incomplete function definition
    Symbol(CommandRegistry::Symbol const&);
    void operator==(CommandRegistry::Symbol const&)const;
    void operator!=(CommandRegistry::Symbol const&)const;
    void operator<(CommandRegistry::Symbol const&)const;
    void fromEnumIndex(unsigned long);
    void fromOptionalIndex(unsigned long);
    void fromFactorizationIndex(unsigned long);
    void fromPostfixIndex(unsigned long);
    void fromEnumValueIndex(unsigned long);
    void fromSoftEnumIndex(unsigned long);
    void toIndex()const;
    void value()const;
    bool isTerminal()const;
    bool isEnum()const;
    bool isOptional()const;
    bool isFactorization()const;
    bool isPostfix()const;
    bool isEnumValue()const;
    bool isSoftEnum()const;
};

}