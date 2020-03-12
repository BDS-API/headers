#pragma once

#include <utility>
#include <memory>
#include "CommandVersion.h"
#include <set>
#include <vector>
#include "CommandFlag.h"
#include <string>
#include <functional>


class CommandRegistry {

public:
    class ConstrainedValue;
    class Enum;
    class Factorization;
    class LexicalToken;
    class OptionalParameterChain;
    class Overload;
    class ParamSymbols;
    class ParseRule;
    class ParseTable;
    class ParseToken;
    class Parser;
    class RegistryState;
    class SemanticInfo;
    class Signature;
    class SoftEnum;
    class Symbol;

    static long TAG_VALUES_SOFTENUM_NAME;
    static long FUNCTION_NAME_SOFTENUM_NAME;
    static long COMMAND_NAME_ENUM_NAME;
    static std::string ParseRuleSymbols;

    CommandRegistry();
//  bool isCommandOfType(std::string const&, CommandTypeFlag)const; //TODO: incomplete function definition
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData> const&, CommandParameterData const*, unsigned long);
    void findCommand(std::string const&)const;
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData> const&, std::vector const&, std::allocator<std::vector const>);
    void _matchesEnumConstraints(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&)const;
    std::string getInvertableFilter(CommandRegistry::ParseToken const&)const;
    void addSymbols(std::vector<CommandRegistry::Symbol> &, std::vector<CommandRegistry::Symbol> const&, bool);
    void pushState();
    void buildOverload(CommandRegistry::Overload &);
    void _findValueConstraints(CommandRegistry::Symbol const&, CommandRegistry::Symbol const&)const;
    void serializeAvailableCommands()const;
    void findCommand(std::string const&);
    void collapse(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void _getConstrainedParamEnumSymbol(CommandParameterData const&)const;
    void _reconstructParseStack(CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const;
    void buildFollowSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int, std::set<CommandRegistry::Symbol, std::less<CommandRegistry::Symbol>, std::allocator<CommandRegistry::Symbol>> &)const;
//  bool canCommandBeUsed(std::string const&, CommandPermissionLevel const&, bool)const; //TODO: incomplete function definition
    void autoCompleteCommand(std::string const&, CommandOrigin const&, AutoCompleteInformation &)const;
    void readInt(int &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &);
    void buildRules(CommandRegistry::Signature &, std::vector<CommandRegistry::Overload *> const&, unsigned long);
    void findEnum(std::string const&)const;
    void setScoreCallback(std::function<int (bool &, std::string const&, Actor const&)>);
    bool isValidCommand(std::string const&)const;
//  void addEnumValuesInternal(std::string const&, std::vector<std::pair<unsigned long, unsigned long>> const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
    void _matchesEnumConstraints(CommandParameterData const&, CommandOrigin const&, CommandRegistry::ParseToken const&)const;
    bool isOptionalChainMatch(CommandRegistry::Symbol const*, CommandRegistry::OptionalParameterChain const*)const;
    void getCommandsPermissionLevel(std::string const&)const;
    void _broadcast(Packet const&)const;
    void findSoftEnum(std::string const&)const;
    void getAutoCompleteOptions(CommandOrigin const&, std::string const&, unsigned int)const;
    void addRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion);
    void forEachTerminal(std::function<void (CommandRegistry::Symbol)>)const;
    void readRelativeCoordinate(bool &, float &, CommandRegistry::ParseToken const&, bool, std::string &, std::vector<std::string> &);
    std::string getAlphabeticalLookup(CommandOrigin const&)const;
    void getCommandStatus(std::string const&)const;
    void expandExcept(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void autoComplete(CommandRegistry::Symbol, std::string const&, bool, CommandOrigin const&, AutoCompleteInformation &, CommandRegistry::SemanticInfo &)const;
//  void addSemanticConstraint(SemanticConstraint); //TODO: incomplete function definition
    void _addFunctionSoftEnum();
    void findIdentifierInfo(std::string const&)const;
//  void _addEnumValueConstraintsInternal(std::vector<std::pair<unsigned long, unsigned int>> const&, SemanticConstraint); //TODO: incomplete function definition
    void addSoftTerminal(std::string const&);
    std::string describe(CommandRegistry::Symbol)const;
    void originCanRun(CommandOrigin const&, CommandRegistry::Signature const&)const;
    void buildFirstSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int)const;
//  void parseOperator(CommandOperator *, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &)const; //TODO: incomplete function definition
    void registerAlias(std::string, std::string);
    void kill(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void fold(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void _isParamFullyParsed(CommandRegistry::ParseToken const*)const;
    bool isParseMatch(CommandParameterData const&, CommandRegistry::Symbol);
    void addSoftEnumValues(std::string const&, std::vector<std::string>);
//  void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, SemanticConstraint); //TODO: incomplete function definition
    void originCanRunOverloadWithParam(CommandOrigin const&, CommandParameterData const&)const;
    std::string describe(CommandParameterData const&)const;
//  void _matchesEnumConstraintsSet(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const; //TODO: incomplete function definition
//  void checkOriginCommandFlags(CommandOrigin const&, CommandFlag, CommandPermissionLevel)const; //TODO: incomplete function definition
    void _reconstructParseStack(std::vector<CommandParameterData> const&, unsigned int, CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const;
    void forEachNonTerminal(std::function<void (CommandRegistry::Symbol)>)const;
    void popState();
    void first(CommandRegistry::ParseTable &, std::vector<CommandRegistry::Symbol> const&)const;
    void addSoftEnum(std::string const&, std::vector<std::string>);
    void parsePartialCommand(CommandRegistry::Parser &, std::string, unsigned int, bool)const;
//  void _addEnumValueConstraintsToExisting(unsigned int, SemanticConstraint); //TODO: incomplete function definition
//  void _matchesEnumConstraintsExcept(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const; //TODO: incomplete function definition
    void getCommandName(std::string const&)const;
    void registerOverloadInternal(CommandRegistry::Signature &, CommandRegistry::Overload &);
    void addPostfix(std::string const&);
//  void registerCommand(std::string const&, char const*, CommandPermissionLevel, CommandFlag, CommandFlag); //TODO: incomplete function definition
    void collapseOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void setNetworkUpdateCallback(std::function<void (Packet const&)>);
    void loadRemoteCommands(AvailableCommandsPacket const&);
    void findPostfix(std::string const&)const;
    void getOverloadSyntaxInformation(CommandOrigin const&, std::string const&, unsigned int)const;
    void buildParseTable(unsigned int)const;
    void setSoftEnumValues(std::string const&, std::vector<std::string>);
    void addEnumValuesToExisting(unsigned int, std::vector<std::pair<unsigned long, unsigned long>> const&);
//  void addEnumValuesInternal(std::string const&, std::vector<std::pair<std::string, unsigned long>> const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
    void describe(CommandRegistry::Signature const&, std::string const&, CommandRegistry::Overload const&, unsigned int, unsigned int *, unsigned int *)const;
    void getCommandOverloadSyntaxInformation(CommandOrigin const&, std::string const&)const;
    void createCommand(CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &)const;
    std::string symbolToString(CommandRegistry::Symbol)const;
    void originCanRun(CommandOrigin const&, CommandRegistry::Overload const&)const;
    void parseParameter(Command *, CommandParameterData const&, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &)const;
    void setupOverloadRules(CommandRegistry::Signature &, CommandRegistry::Overload &);
    void getAliases(std::string const&)const;
    ~CommandRegistry();
    void findEnumValue(std::string const&)const;
    void getEnumData(CommandRegistry::ParseToken const&)const;
    void expandOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    bool requiresCheatsEnabled(std::string const&)const;
    void removeSoftEnumValues(std::string const&, std::vector<std::string>);
    bool hasState();
    void setCommandRegistrationOverride(std::function<void (CommandFlag &, std::string const&)>);
    void _getConstrainedParamEnumSymbol(CommandRegistry::Symbol)const;
    bool hasCommands()const;
    void getFieldSet(Command *, CommandParameterData const&);
    void readFloat(float &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &);
    void _removeStringQuotes(std::string const&);
    void expand(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void getParseSymbol(CommandParameterData const&);
    bool isValid(CommandRegistry::Symbol)const;
    void addEnumValues(std::string const&, std::vector<std::string> const&);
    void parseSelector(CommandSelectorBase *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &, bool)const;
    void getVersionField(Command *, CommandRegistry::Overload const&);
    class ConstrainedValue {

    public:
        ConstrainedValue(std::pair<unsigned long, unsigned int> const&);
        ConstrainedValue(CommandRegistry::ConstrainedValue &&);
        ~ConstrainedValue();
    };
    class Enum {

    public:
        ~Enum();
        Enum(CommandRegistry::Enum &&);
//      Enum(std::string const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
    };
    class Factorization {

    public:
        Factorization(CommandRegistry::Factorization &&);
        Factorization(CommandRegistry::Symbol);
    };
    class LexicalToken {

    public:
        LexicalToken(CommandRegistry const&);
        void operator==(CommandRegistry::Symbol const&)const;
        void operator!=(CommandRegistry::Symbol const&)const;
    };
    class OptionalParameterChain {

    public:
        OptionalParameterChain(CommandRegistry::OptionalParameterChain const&);
        OptionalParameterChain(int, int, CommandRegistry::Symbol);
    };
    class Overload {

    public:
//      Overload(CommandVersion, std::unique_ptr<Command> ((void), ); //TODO: incomplete function definition
        Overload(CommandRegistry::Overload &&);
        ~Overload();
    };
    class ParamSymbols {

    public:
        ParamSymbols();
    };
    class ParseRule {

    public:
        ParseRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion);
        ParseRule(CommandRegistry::ParseRule &&);
        ~ParseRule();
    };
    class ParseTable {

    public:
        ParseTable();
        ~ParseTable();
    };
    class ParseToken {

    public:
        ParseToken(CommandRegistry::Symbol, CommandRegistry::ParseToken *);
        std::string toString()const;
        ~ParseToken();
    };
    class Parser {

    public:
        void parse(std::string const&);
        std::string getErrorMessage()const;
        void createCommand(CommandOrigin const&);
        void _findParsePrediction(CommandRegistry::LexicalToken const&, CommandRegistry::Symbol const&)const;
        ~Parser();
        std::string getErrorParams()const;
        Parser(CommandRegistry const&, int);
    };
    class RegistryState {

    public:
        RegistryState(CommandRegistry::RegistryState const&);
        ~RegistryState();
        RegistryState(CommandRegistry::RegistryState &&);
        RegistryState();
    };
    class SemanticInfo {

    public:
        void reset();
        SemanticInfo();
        ~SemanticInfo();
    };
    class Signature {

    public:
        Signature(CommandRegistry::Signature &&);
        ~Signature();
//      Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag); //TODO: incomplete function definition
    };
    class SoftEnum {

    public:
        SoftEnum(CommandRegistry::SoftEnum &&);
        ~SoftEnum();
        SoftEnum(std::string const&, std::vector<std::string>);
    };
    class Symbol {

    public:
        void fromSoftEnumIndex(unsigned long);
        void fromEnumValueIndex(unsigned long);
//      Symbol(CommandRegistry::HardNonTerminal); //TODO: incomplete function definition
        void fromEnumIndex(unsigned long);
        void value()const;
        Symbol(unsigned long);
        void fromOptionalIndex(unsigned long);
        Symbol(CommandRegistry::Symbol const&);
        bool isEnumValue()const;
        void operator<(CommandRegistry::Symbol const&)const;
//      Symbol(CommandLexer::TokenType); //TODO: incomplete function definition
        bool isSoftEnum()const;
        void operator!=(CommandRegistry::Symbol const&)const;
        void fromPostfixIndex(unsigned long);
        void toIndex()const;
        bool isFactorization()const;
        bool isOptional()const;
        bool isTerminal()const;
        bool isEnum()const;
        bool isPostfix()const;
        void operator==(CommandRegistry::Symbol const&)const;
        Symbol();
        void fromFactorizationIndex(unsigned long);
    };
};
