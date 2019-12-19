#pragma once

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
    void toIndex(void)const;
    void value(void)const;
    bool isTerminal(void)const;
    bool isEnum(void)const;
    bool isOptional(void)const;
    bool isFactorization(void)const;
    bool isPostfix(void)const;
    bool isEnumValue(void)const;
    bool isSoftEnum(void)const;
};
