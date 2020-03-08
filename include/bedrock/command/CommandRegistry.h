#pragma once

#include "../network/packet/AvailableCommandsPacket"
#include "../../unmapped/AutoCompleteInformation"
#include "../network/packet/Packet"
#include "orgin/CommandOrigin"


class CommandRegistry {

public:
    static long TAG_VALUES_SOFTENUM_NAME;
    static long FUNCTION_NAME_SOFTENUM_NAME;
    static long COMMAND_NAME_ENUM_NAME;
    static long ParseRuleSymbols[abi:cxx11];


    void collapse(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void collapseOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void expand(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void expandExcept(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void expandOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void fold(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol);
    void kill(CommandRegistry::ParseToken &, CommandRegistry::Symbol);
    void readFloat(float &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string, std::allocator<std::string>> &);
    void readInt(int &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string, std::allocator<std::string>> &);
    void readRelativeCoordinate(bool &, float &, CommandRegistry::ParseToken const&, bool, std::string &, std::vector<std::string, std::allocator<std::string>> &);
    void parseOperator(CommandOperator *, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string, std::allocator<std::string>> &)const;
    void getEnumData(CommandRegistry::ParseToken const&)const;
    void parseSelector(CommandSelectorBase *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string, std::allocator<std::string>> &, bool)const;
    void _removeStringQuotes(std::string const&);
    void createCommand(CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string, std::allocator<std::string>> &)const;
    void getParseSymbol(CommandParameterData const&);
    bool isParseMatch(CommandParameterData const&, CommandRegistry::Symbol);
    void getFieldSet(Command *, CommandParameterData const&);
    void getVersionField(Command *, CommandRegistry::Overload const&);
    void parseParameter(Command *, CommandParameterData const&, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string, std::allocator<std::string>> &)const;
    void findCommand(std::string const&)const;
    CommandRegistry(void);
    void addSoftTerminal(std::string const&);
    void addEnumValues(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void addSoftEnum(std::string const&, std::vector<std::string, std::allocator<std::string>>);
    void addRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> &&, std::function<CommandRegistry::ParseToken ()(std::function&, CommandRegistry::Symbol)>, CommandVersion);
    void findEnumValue(std::string const&)const;
    void _addFunctionSoftEnum();
    void addSemanticConstraint(SemanticConstraint);
    void registerCommand(std::string const&, char const*, CommandPermissionLevel, CommandFlag, CommandFlag);
    void addEnumValuesInternal(std::string const&, std::vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> const&, typeid_t<CommandRegistry>, bool ()(mmandRegistry::*), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector&<std::string, std::allocator<std::string>>);
    void addEnumValueConstraints(std::string const&, std::vector<std::string, std::allocator<std::string>> const&, SemanticConstraint);
    void registerAlias(std::string, std::string);
    void setCommandRegistrationOverride(std::function<void ()(CommandFlag &, std::string const&)>);
    void getCommandName(std::string const&)const;
    bool isValidCommand(std::string const&)const;
    void getCommandStatus(std::string const&)const;
    bool isCommandOfType(std::string const&, CommandTypeFlag)const;
    bool requiresCheatsEnabled(std::string const&)const;
    void getCommandsPermissionLevel(std::string const&)const;
    void buildRules(CommandRegistry::Signature &, std::vector<CommandRegistry::Overload *, std::allocator<CommandRegistry::Overload *>> const&, unsigned long);
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData, std::allocator<CommandParameterData>> const&, CommandParameterData const*, unsigned long);
    void registerOverloadInternal(CommandRegistry::Signature &, CommandRegistry::Overload &);
    void addPostfix(std::string const&);
    void setupOverloadRules(CommandRegistry::Signature &, CommandRegistry::Overload &);
    void findCommand(std::string const&);
    void findEnum(std::string const&)const;
    void findSoftEnum(std::string const&)const;
    void findPostfix(std::string const&)const;
    void findIdentifierInfo(std::string const&)const;
    void buildOverload(CommandRegistry::Overload &);
    bool isValid(CommandRegistry::Symbol)const;
    bool isOptionalChainMatch(CommandRegistry::Symbol const*, CommandRegistry::OptionalParameterChain const*)const;
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData, std::allocator<CommandParameterData>> const&, std::vector const&, std::allocator<std::vector const>);
    void addSymbols(std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> &, std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> const&, bool);
    void buildFirstSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int)const;
    void buildFollowSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int, std::set<CommandRegistry::Symbol, std::less<CommandRegistry::Symbol>, std::allocator<CommandRegistry::Symbol>> &)const;
    void first(CommandRegistry::ParseTable &, std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> const&)const;
    void forEachTerminal(std::function<void ()(CommandRegistry::Symbol)>)const;
    void forEachNonTerminal(std::function<void ()(CommandRegistry::Symbol)>)const;
    void buildParseTable(unsigned int)const;
    void addEnumValuesInternal(std::string const&, std::vector<std::pair<std::string, unsigned long>, std::allocator<std::pair<std::string, unsigned long>>> const&, typeid_t<CommandRegistry>, bool ()(mmandRegistry::*), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector&<std::string, std::allocator<std::string>>);
    void addEnumValuesToExisting(unsigned int, std::vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> const&);
    void _addEnumValueConstraintsInternal(std::vector<std::pair<unsigned long, unsigned int>, std::allocator<std::pair<unsigned long, unsigned int>>> const&, SemanticConstraint);
    void _addEnumValueConstraintsToExisting(unsigned int, SemanticConstraint);
    void addSoftEnumValues(std::string const&, std::vector<std::string, std::allocator<std::string>>);
    void setSoftEnumValues(std::string const&, std::vector<std::string, std::allocator<std::string>>);
    void _broadcast(Packet const&)const;
    void removeSoftEnumValues(std::string const&, std::vector<std::string, std::allocator<std::string>>);
    void originCanRun(CommandOrigin const&, CommandRegistry::Signature const&)const;
    void autoCompleteCommand(std::string const&, CommandOrigin const&, AutoCompleteInformation &)const;
    void autoComplete(CommandRegistry::Symbol, std::string const&, bool, CommandOrigin const&, AutoCompleteInformation &, CommandRegistry::SemanticInfo &)const;
    void _matchesEnumConstraints(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&)const;
    void parsePartialCommand(CommandRegistry::Parser &, std::string, unsigned int, bool)const;
    void getAutoCompleteOptions(CommandOrigin const&, std::string const&, unsigned int)const;
    void _reconstructParseStack(std::vector<CommandParameterData, std::allocator<CommandParameterData>> const&, unsigned int, CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const;
    void _reconstructParseStack(CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const;
    void describe(CommandRegistry::Signature const&, std::string const&, CommandRegistry::Overload const&, unsigned int, unsigned int *, unsigned int *)const;
    void getCommandOverloadSyntaxInformation(CommandOrigin const&, std::string const&)const;
    void originCanRun(CommandOrigin const&, CommandRegistry::Overload const&)const;
    void getAliases(std::string const&)const;
    bool canCommandBeUsed(std::string const&, CommandPermissionLevel const&, bool)const;
    void checkOriginCommandFlags(CommandOrigin const&, CommandFlag, CommandPermissionLevel)const;
    void _matchesEnumConstraintsExcept(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const;
    void originCanRunOverloadWithParam(CommandOrigin const&, CommandParameterData const&)const;
    void _getConstrainedParamEnumSymbol(CommandParameterData const&)const;
    void _getConstrainedParamEnumSymbol(CommandRegistry::Symbol)const;
    void _isParamFullyParsed(CommandRegistry::ParseToken const*)const;
    void _findValueConstraints(CommandRegistry::Symbol const&, CommandRegistry::Symbol const&)const;
    void _matchesEnumConstraints(CommandParameterData const&, CommandOrigin const&, CommandRegistry::ParseToken const&)const;
    void _matchesEnumConstraintsSet(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const;
    void getOverloadSyntaxInformation(CommandOrigin const&, std::string const&, unsigned int)const;
    bool hasCommands()const;
    bool hasState();
    void pushState();
    void popState();
    void serializeAvailableCommands()const;
    void loadRemoteCommands(AvailableCommandsPacket const&);
    void setNetworkUpdateCallback(std::function<void ()(Packet const&)>);
    void setScoreCallback(std::function<int ()(bool &, std::string const&, Actor const&)>);
};
