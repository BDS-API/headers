#pragma once

#include "../bedrock/command/Symbol"


using namespace CommandRegistry;

class Symbol {

public:

    Symbol(void);
    Symbol(unsigned long);
    Symbol(CommandLexer::TokenType);
    Symbol(CommandRegistry::HardNonTerminal);
    Symbol(CommandRegistry::Symbol const&);
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
