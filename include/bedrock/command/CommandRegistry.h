#pragma once

#include <string>
#include "../../unmapped/AutoCompleteInformation.h"
#include "../actor/Actor.h"
#include "CommandSelectorBase.h"
#include <memory>
#include "CommandFlag.h"
#include "origin/CommandOrigin.h"
#include "Command.h"
#include "../network/packet/AvailableCommandsPacket.h"
#include <vector>
#include "../network/packet/Packet.h"
#include "CommandVersion.h"
#include <set>
#include "CommandParameterData.h"
#include <functional>
#include <utility>


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

    void getFieldSet(Command *, CommandParameterData const&);
    void findIdentifierInfo(std::string const&)const;
    void createCommand(CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &)const;
    void buildParseTable(unsigned int)const;
    ~CommandRegistry();
    void getAutoCompleteOptions(CommandOrigin const&, std::string const&, unsigned int)const;
    void setupOverloadRules(CommandRegistry::Signature &, CommandRegistry::Overload &);
    void buildFirstSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int)const;
    bool isOptionalChainMatch(CommandRegistry::Symbol const*, CommandRegistry::OptionalParameterChain const*)const;
    void first(CommandRegistry::ParseTable &, std::vector<CommandRegistry::Symbol> const&)const;
    std::string getAlphabeticalLookup(CommandOrigin const&)const;
    void expandOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void _addFunctionSoftEnum();
    void _getConstrainedParamEnumSymbol(CommandParameterData const&)const;
    void pushState();
    void registerAlias(std::string, std::string);
    void parseParameter(Command *, CommandParameterData const&, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &)const;
    void addEnumValues(std::string const&, std::vector<std::string> const&);
    void addEnumValuesToExisting(unsigned int, std::vector<std::pair<unsigned long, unsigned long>> const&);
    void getEnumData(CommandRegistry::ParseToken const&)const;
//  void registerCommand(std::string const&, char const*, CommandPermissionLevel, CommandFlag, CommandFlag); //TODO: incomplete function definition
    std::string symbolToString(CommandRegistry::Symbol)const;
    std::string describe(CommandParameterData const&)const;
    void getOverloadSyntaxInformation(CommandOrigin const&, std::string const&, unsigned int)const;
//  void addEnumValuesInternal(std::string const&, std::vector<std::pair<std::string, unsigned long>> const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
//  void _matchesEnumConstraintsSet(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const; //TODO: incomplete function definition
//  void _addEnumValueConstraintsToExisting(unsigned int, SemanticConstraint); //TODO: incomplete function definition
    void getParseSymbol(CommandParameterData const&);
    void parseSelector(CommandSelectorBase *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &, bool)const;
    void _removeStringQuotes(std::string const&);
    void _getConstrainedParamEnumSymbol(CommandRegistry::Symbol)const;
    void removeSoftEnumValues(std::string const&, std::vector<std::string>);
    void loadRemoteCommands(AvailableCommandsPacket const&);
    void originCanRun(CommandOrigin const&, CommandRegistry::Signature const&)const;
    void _matchesEnumConstraints(CommandParameterData const&, CommandOrigin const&, CommandRegistry::ParseToken const&)const;
    void originCanRun(CommandOrigin const&, CommandRegistry::Overload const&)const;
    void registerOverloadInternal(CommandRegistry::Signature &, CommandRegistry::Overload &);
    void findSoftEnum(std::string const&)const;
    void autoComplete(CommandRegistry::Symbol, std::string const&, bool, CommandOrigin const&, AutoCompleteInformation &, CommandRegistry::SemanticInfo &)const;
    void serializeAvailableCommands()const;
    void addRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion);
    void _reconstructParseStack(CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const;
    void findCommand(std::string const&);
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData> const&, std::vector const&, std::allocator<std::vector const>);
    CommandRegistry();
//  void _matchesEnumConstraintsExcept(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const; //TODO: incomplete function definition
    void expand(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void originCanRunOverloadWithParam(CommandOrigin const&, CommandParameterData const&)const;
    void setScoreCallback(std::function<int (bool &, std::string const&, Actor const&)>);
    bool isParseMatch(CommandParameterData const&, CommandRegistry::Symbol);
    void setCommandRegistrationOverride(std::function<void (CommandFlag &, std::string const&)>);
    void autoCompleteCommand(std::string const&, CommandOrigin const&, AutoCompleteInformation &)const;
    std::string describe(CommandRegistry::Symbol)const;
    void getAliases(std::string const&)const;
//  bool canCommandBeUsed(std::string const&, CommandPermissionLevel const&, bool)const; //TODO: incomplete function definition
    void kill(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    bool isValidCommand(std::string const&)const;
    void buildRules(CommandRegistry::Signature &, std::vector<CommandRegistry::Overload *> const&, unsigned long);
    void getCommandStatus(std::string const&)const;
    void _broadcast(Packet const&)const;
    void getCommandsPermissionLevel(std::string const&)const;
    void getCommandOverloadSyntaxInformation(CommandOrigin const&, std::string const&)const;
//  void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, SemanticConstraint); //TODO: incomplete function definition
    void findCommand(std::string const&)const;
    bool isValid(CommandRegistry::Symbol)const;
    void addSoftEnumValues(std::string const&, std::vector<std::string>);
    void _findValueConstraints(CommandRegistry::Symbol const&, CommandRegistry::Symbol const&)const;
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData> const&, CommandParameterData const*, unsigned long);
    void _isParamFullyParsed(CommandRegistry::ParseToken const*)const;
    void getCommandName(std::string const&)const;
    void _reconstructParseStack(std::vector<CommandParameterData> const&, unsigned int, CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const;
    void getVersionField(Command *, CommandRegistry::Overload const&);
    void collapse(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
//  void checkOriginCommandFlags(CommandOrigin const&, CommandFlag, CommandPermissionLevel)const; //TODO: incomplete function definition
    void addSoftEnum(std::string const&, std::vector<std::string>);
    void addSymbols(std::vector<CommandRegistry::Symbol> &, std::vector<CommandRegistry::Symbol> const&, bool);
    void buildOverload(CommandRegistry::Overload &);
    void readInt(int &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &);
    void popState();
    void findEnum(std::string const&)const;
    void parsePartialCommand(CommandRegistry::Parser &, std::string, unsigned int, bool)const;
    void addPostfix(std::string const&);
    void fold(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void setNetworkUpdateCallback(std::function<void (Packet const&)>);
    bool hasState();
    void _matchesEnumConstraints(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&)const;
    void addSoftTerminal(std::string const&);
    void findPostfix(std::string const&)const;
    std::string getInvertableFilter(CommandRegistry::ParseToken const&)const;
    bool requiresCheatsEnabled(std::string const&)const;
//  void buildFollowSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int, std::set<CommandRegistry::Symbol, std::less<CommandRegistry::Symbol>, std::allocator<CommandRegistry::Symbol>> &)const; //TODO: incomplete function definition
//  void parseOperator(CommandOperator *, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &)const; //TODO: incomplete function definition
    void forEachTerminal(std::function<void (CommandRegistry::Symbol)>)const;
//  void addSemanticConstraint(SemanticConstraint); //TODO: incomplete function definition
    void readRelativeCoordinate(bool &, float &, CommandRegistry::ParseToken const&, bool, std::string &, std::vector<std::string> &);
//  void addEnumValuesInternal(std::string const&, std::vector<std::pair<unsigned long, unsigned long>> const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
    void findEnumValue(std::string const&)const;
    void describe(CommandRegistry::Signature const&, std::string const&, CommandRegistry::Overload const&, unsigned int, unsigned int *, unsigned int *)const;
//  bool isCommandOfType(std::string const&, CommandTypeFlag)const; //TODO: incomplete function definition
    void collapseOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
//  void _addEnumValueConstraintsInternal(std::vector<std::pair<unsigned long, unsigned int>> const&, SemanticConstraint); //TODO: incomplete function definition
    void expandExcept(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    bool hasCommands()const;
    void readFloat(float &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &);
    void forEachNonTerminal(std::function<void (CommandRegistry::Symbol)>)const;
    void setSoftEnumValues(std::string const&, std::vector<std::string>);
    class ConstrainedValue {

    public:
        ConstrainedValue(std::pair<unsigned long, unsigned int> const&);
        ConstrainedValue(CommandRegistry::ConstrainedValue &&);
        ~ConstrainedValue();
    };
    class Enum {

    public:
        Enum(CommandRegistry::Enum &&);
//      Enum(std::string const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
        ~Enum();
    };
    class Factorization {

    public:
        Factorization(CommandRegistry::Factorization &&);
        Factorization(CommandRegistry::Symbol);
    };
    class LexicalToken {

    public:
        LexicalToken(CommandRegistry const&);
        void operator!=(CommandRegistry::Symbol const&)const;
        void operator==(CommandRegistry::Symbol const&)const;
    };
    class OptionalParameterChain {

    public:
        OptionalParameterChain(int, int, CommandRegistry::Symbol);
        OptionalParameterChain(CommandRegistry::OptionalParameterChain const&);
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
        ~ParseRule();
        ParseRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion);
        ParseRule(CommandRegistry::ParseRule &&);
    };
    class ParseTable {

    public:
        ParseTable();
        ~ParseTable();
    };
    class ParseToken {

    public:
        std::string toString()const;
        ParseToken(CommandRegistry::Symbol, CommandRegistry::ParseToken *);
        ~ParseToken();
    };
    class Parser {

    public:
        std::string getErrorParams()const;
        void parse(std::string const&);
        ~Parser();
        std::string getErrorMessage()const;
        Parser(CommandRegistry const&, int);
        void createCommand(CommandOrigin const&);
        void _findParsePrediction(CommandRegistry::LexicalToken const&, CommandRegistry::Symbol const&)const;
    };
    class RegistryState {

    public:
        RegistryState();
        ~RegistryState();
        RegistryState(CommandRegistry::RegistryState &&);
        RegistryState(CommandRegistry::RegistryState const&);
    };
    class SemanticInfo {

    public:
        SemanticInfo();
        void reset();
        ~SemanticInfo();
    };
    class Signature {

    public:
        ~Signature();
        Signature(CommandRegistry::Signature &&);
//      Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag); //TODO: incomplete function definition
    };
    class SoftEnum {

    public:
        SoftEnum(std::string const&, std::vector<std::string>);
        ~SoftEnum();
        SoftEnum(CommandRegistry::SoftEnum &&);
    };
    class Symbol {

    public:
        void operator!=(CommandRegistry::Symbol const&)const;
        void fromPostfixIndex(unsigned long);
        bool isSoftEnum()const;
        void fromFactorizationIndex(unsigned long);
        void operator==(CommandRegistry::Symbol const&)const;
        bool isEnum()const;
        void operator<(CommandRegistry::Symbol const&)const;
        bool isTerminal()const;
        void fromSoftEnumIndex(unsigned long);
        bool isPostfix()const;
        bool isEnumValue()const;
        void fromEnumIndex(unsigned long);
        bool isFactorization()const;
        Symbol(unsigned long);
        void value()const;
//      Symbol(CommandLexer::TokenType); //TODO: incomplete function definition
        Symbol(CommandRegistry::Symbol const&);
        void fromEnumValueIndex(unsigned long);
        void toIndex()const;
//      Symbol(CommandRegistry::HardNonTerminal); //TODO: incomplete function definition
        void fromOptionalIndex(unsigned long);
        bool isOptional()const;
        Symbol();
    };
};
