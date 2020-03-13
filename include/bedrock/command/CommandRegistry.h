#pragma once

#include "CommandVersion.h"
#include <vector>
#include "CommandFlag.h"
#include <memory>
#include <string>
#include <set>
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

    void collapse(CommandRegistry::ParseToken &, CommandRegistry::Symbol); // _ZN15CommandRegistry8collapseERNS_10ParseTokenENS_6SymbolE
    void collapseOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol); // _ZN15CommandRegistry10collapseOnERNS_10ParseTokenENS_6SymbolES2_
    void expand(CommandRegistry::ParseToken &, CommandRegistry::Symbol); // _ZN15CommandRegistry6expandERNS_10ParseTokenENS_6SymbolE
    void expandExcept(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol); // _ZN15CommandRegistry12expandExceptERNS_10ParseTokenENS_6SymbolES2_
    void expandOn(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol); // _ZN15CommandRegistry8expandOnERNS_10ParseTokenENS_6SymbolES2_
    void fold(CommandRegistry::ParseToken &, CommandRegistry::Symbol, CommandRegistry::Symbol); // _ZN15CommandRegistry4foldERNS_10ParseTokenENS_6SymbolES2_
    void kill(CommandRegistry::ParseToken &, CommandRegistry::Symbol); // _ZN15CommandRegistry4killERNS_10ParseTokenENS_6SymbolE
    void readFloat(float &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &); // _ZN15CommandRegistry9readFloatERfRKNS_10ParseTokenERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorIS9_SaIS9_EE
    void readInt(int &, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &); // _ZN15CommandRegistry7readIntERiRKNS_10ParseTokenERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorIS9_SaIS9_EE
    void readRelativeCoordinate(bool &, float &, CommandRegistry::ParseToken const&, bool, std::string &, std::vector<std::string> &); // _ZN15CommandRegistry22readRelativeCoordinateERbRfRKNS_10ParseTokenEbRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISA_SaISA_EE
//  void parseOperator(CommandOperator *, CommandRegistry::ParseToken const&, std::string &, std::vector<std::string> &)const; //TODO: incomplete function definition // _ZNK15CommandRegistry13parseOperatorEP15CommandOperatorRKNS_10ParseTokenERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISA_SaISA_EE
    void getEnumData(CommandRegistry::ParseToken const&)const; // _ZNK15CommandRegistry11getEnumDataERKNS_10ParseTokenE
    std::string getInvertableFilter(CommandRegistry::ParseToken const&)const; // _ZNK15CommandRegistry19getInvertableFilterB5cxx11ERKNS_10ParseTokenE
    void parseSelector(CommandSelectorBase *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &, bool)const; // _ZNK15CommandRegistry13parseSelectorEP19CommandSelectorBaseRKNS_10ParseTokenERK13CommandOriginiRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISD_SaISD_EEb
    void _removeStringQuotes(std::string const&); // _ZN15CommandRegistry19_removeStringQuotesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createCommand(CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &)const; // _ZNK15CommandRegistry13createCommandERKNS_10ParseTokenERK13CommandOriginiRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISB_SaISB_EE
    void getParseSymbol(CommandParameterData const&); // _ZN15CommandRegistry14getParseSymbolERK20CommandParameterData
    bool isParseMatch(CommandParameterData const&, CommandRegistry::Symbol); // _ZN15CommandRegistry12isParseMatchERK20CommandParameterDataNS_6SymbolE
    void getFieldSet(Command *, CommandParameterData const&); // _ZN15CommandRegistry11getFieldSetEP7CommandRK20CommandParameterData
    void getVersionField(Command *, CommandRegistry::Overload const&); // _ZN15CommandRegistry15getVersionFieldEP7CommandRKNS_8OverloadE
    void parseParameter(Command *, CommandParameterData const&, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &)const; // _ZNK15CommandRegistry14parseParameterEP7CommandRK20CommandParameterDataRKNS_10ParseTokenERK13CommandOriginiRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISG_SaISG_EE
    void findCommand(std::string const&)const; // _ZNK15CommandRegistry11findCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    CommandRegistry(); // _ZN15CommandRegistryC2Ev
    void addSoftTerminal(std::string const&); // _ZN15CommandRegistry15addSoftTerminalERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addEnumValues(std::string const&, std::vector<std::string> const&); // _ZN15CommandRegistry13addEnumValuesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void addSoftEnum(std::string const&, std::vector<std::string>); // _ZN15CommandRegistry11addSoftEnumERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS5_SaIS5_EE
    void addRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion); // _ZN15CommandRegistry7addRuleENS_6SymbolEOSt6vectorIS0_SaIS0_EESt8functionIFPNS_10ParseTokenERS6_S0_EE14CommandVersion
    void findEnumValue(std::string const&)const; // _ZNK15CommandRegistry13findEnumValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _addFunctionSoftEnum(); // _ZN15CommandRegistry20_addFunctionSoftEnumEv
//  void addSemanticConstraint(SemanticConstraint); //TODO: incomplete function definition // _ZN15CommandRegistry21addSemanticConstraintE18SemanticConstraint
//  void registerCommand(std::string const&, char const*, CommandPermissionLevel, CommandFlag, CommandFlag); //TODO: incomplete function definition // _ZN15CommandRegistry15registerCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKc22CommandPermissionLevel11CommandFlagSB_
//  void addEnumValuesInternal(std::string const&, std::vector<std::pair<unsigned long, unsigned long>> const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition // _ZN15CommandRegistry21addEnumValuesInternalERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISt4pairImmESaISA_EE8typeid_tIS_EMS_KFbPvRKNS_10ParseTokenERK13CommandOriginiRS5_RS8_IS5_SaIS5_EEE
//  void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, SemanticConstraint); //TODO: incomplete function definition // _ZN15CommandRegistry23addEnumValueConstraintsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE18SemanticConstraint
    void registerAlias(std::string, std::string); // _ZN15CommandRegistry13registerAliasENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_
    void setCommandRegistrationOverride(std::function<void (CommandFlag &, std::string const&)>); // _ZN15CommandRegistry30setCommandRegistrationOverrideESt8functionIFvR11CommandFlagRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    void getCommandName(std::string const&)const; // _ZNK15CommandRegistry14getCommandNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isValidCommand(std::string const&)const; // _ZNK15CommandRegistry14isValidCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCommandStatus(std::string const&)const; // _ZNK15CommandRegistry16getCommandStatusERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool isCommandOfType(std::string const&, CommandTypeFlag)const; //TODO: incomplete function definition // _ZNK15CommandRegistry15isCommandOfTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE15CommandTypeFlag
    bool requiresCheatsEnabled(std::string const&)const; // _ZNK15CommandRegistry21requiresCheatsEnabledERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCommandsPermissionLevel(std::string const&)const; // _ZNK15CommandRegistry26getCommandsPermissionLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void buildRules(CommandRegistry::Signature &, std::vector<CommandRegistry::Overload *> const&, unsigned long); // _ZN15CommandRegistry10buildRulesERNS_9SignatureERKSt6vectorIPNS_8OverloadESaIS4_EEm
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData> const&, CommandParameterData const*, unsigned long); // _ZN15CommandRegistry22buildOptionalRuleChainERKNS_9SignatureERKSt6vectorI20CommandParameterDataSaIS4_EEPKS4_m
    void registerOverloadInternal(CommandRegistry::Signature &, CommandRegistry::Overload &); // _ZN15CommandRegistry24registerOverloadInternalERNS_9SignatureERNS_8OverloadE
    void addPostfix(std::string const&); // _ZN15CommandRegistry10addPostfixERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setupOverloadRules(CommandRegistry::Signature &, CommandRegistry::Overload &); // _ZN15CommandRegistry18setupOverloadRulesERNS_9SignatureERNS_8OverloadE
    void findCommand(std::string const&); // _ZN15CommandRegistry11findCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void findEnum(std::string const&)const; // _ZNK15CommandRegistry8findEnumERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void findSoftEnum(std::string const&)const; // _ZNK15CommandRegistry12findSoftEnumERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void findPostfix(std::string const&)const; // _ZNK15CommandRegistry11findPostfixERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void findIdentifierInfo(std::string const&)const; // _ZNK15CommandRegistry18findIdentifierInfoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void buildOverload(CommandRegistry::Overload &); // _ZN15CommandRegistry13buildOverloadERNS_8OverloadE
    bool isValid(CommandRegistry::Symbol)const; // _ZNK15CommandRegistry7isValidENS_6SymbolE
    bool isOptionalChainMatch(CommandRegistry::Symbol const*, CommandRegistry::OptionalParameterChain const*)const; // _ZNK15CommandRegistry20isOptionalChainMatchEPKNS_6SymbolEPKNS_22OptionalParameterChainE
    void buildOptionalRuleChain(CommandRegistry::Signature const&, std::vector<CommandParameterData> const&, std::vector const&, std::allocator<std::vector const>); // _ZN15CommandRegistry22buildOptionalRuleChainERKNS_9SignatureERKSt6vectorI20CommandParameterDataSaIS4_EERKS3_INS_6SymbolESaIS9_EE
    void addSymbols(std::vector<CommandRegistry::Symbol> &, std::vector<CommandRegistry::Symbol> const&, bool); // _ZN15CommandRegistry10addSymbolsERSt6vectorINS_6SymbolESaIS1_EERKS3_b
    void buildFirstSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int)const; // _ZNK15CommandRegistry13buildFirstSetERNS_10ParseTableENS_6SymbolEj
    void buildFollowSet(CommandRegistry::ParseTable &, CommandRegistry::Symbol, unsigned int, std::set<CommandRegistry::Symbol, std::less<CommandRegistry::Symbol>, std::allocator<CommandRegistry::Symbol>> &)const; // _ZNK15CommandRegistry14buildFollowSetERNS_10ParseTableENS_6SymbolEjRSt3setIS2_St4lessIS2_ESaIS2_EE
    void first(CommandRegistry::ParseTable &, std::vector<CommandRegistry::Symbol> const&)const; // _ZNK15CommandRegistry5firstERNS_10ParseTableERKSt6vectorINS_6SymbolESaIS3_EE
    void forEachTerminal(std::function<void (CommandRegistry::Symbol)>)const; // _ZNK15CommandRegistry15forEachTerminalESt8functionIFvNS_6SymbolEEE
    void forEachNonTerminal(std::function<void (CommandRegistry::Symbol)>)const; // _ZNK15CommandRegistry18forEachNonTerminalESt8functionIFvNS_6SymbolEEE
    void buildParseTable(unsigned int)const; // _ZNK15CommandRegistry15buildParseTableEj
//  void addEnumValuesInternal(std::string const&, std::vector<std::pair<std::string, unsigned long>> const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition // _ZN15CommandRegistry21addEnumValuesInternalERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISt4pairIS5_mESaISA_EE8typeid_tIS_EMS_KFbPvRKNS_10ParseTokenERK13CommandOriginiRS5_RS8_IS5_SaIS5_EEE
    void addEnumValuesToExisting(unsigned int, std::vector<std::pair<unsigned long, unsigned long>> const&); // _ZN15CommandRegistry23addEnumValuesToExistingEjRKSt6vectorISt4pairImmESaIS2_EE
//  void _addEnumValueConstraintsInternal(std::vector<std::pair<unsigned long, unsigned int>> const&, SemanticConstraint); //TODO: incomplete function definition // _ZN15CommandRegistry32_addEnumValueConstraintsInternalERKSt6vectorISt4pairImjESaIS2_EE18SemanticConstraint
//  void _addEnumValueConstraintsToExisting(unsigned int, SemanticConstraint); //TODO: incomplete function definition // _ZN15CommandRegistry34_addEnumValueConstraintsToExistingEj18SemanticConstraint
    void addSoftEnumValues(std::string const&, std::vector<std::string>); // _ZN15CommandRegistry17addSoftEnumValuesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS5_SaIS5_EE
    void setSoftEnumValues(std::string const&, std::vector<std::string>); // _ZN15CommandRegistry17setSoftEnumValuesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS5_SaIS5_EE
    void _broadcast(Packet const&)const; // _ZNK15CommandRegistry10_broadcastERK6Packet
    void removeSoftEnumValues(std::string const&, std::vector<std::string>); // _ZN15CommandRegistry20removeSoftEnumValuesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS5_SaIS5_EE
    std::string getAlphabeticalLookup(CommandOrigin const&)const; // _ZNK15CommandRegistry21getAlphabeticalLookupB5cxx11ERK13CommandOrigin
    void originCanRun(CommandOrigin const&, CommandRegistry::Signature const&)const; // _ZNK15CommandRegistry12originCanRunERK13CommandOriginRKNS_9SignatureE
    void autoCompleteCommand(std::string const&, CommandOrigin const&, AutoCompleteInformation &)const; // _ZNK15CommandRegistry19autoCompleteCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK13CommandOriginR23AutoCompleteInformation
    void autoComplete(CommandRegistry::Symbol, std::string const&, bool, CommandOrigin const&, AutoCompleteInformation &, CommandRegistry::SemanticInfo &)const; // _ZNK15CommandRegistry12autoCompleteENS_6SymbolERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbRK13CommandOriginR23AutoCompleteInformationRNS_12SemanticInfoE
    void _matchesEnumConstraints(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry23_matchesEnumConstraintsERKNS_6SymbolERK13CommandOriginS2_
    void parsePartialCommand(CommandRegistry::Parser &, std::string, unsigned int, bool)const; // _ZNK15CommandRegistry19parsePartialCommandERNS_6ParserENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjb
    void getAutoCompleteOptions(CommandOrigin const&, std::string const&, unsigned int)const; // _ZNK15CommandRegistry22getAutoCompleteOptionsERK13CommandOriginRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj
    void _reconstructParseStack(std::vector<CommandParameterData> const&, unsigned int, CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const; // _ZNK15CommandRegistry22_reconstructParseStackERKSt6vectorI20CommandParameterDataSaIS1_EEjPKNS_10ParseTokenERNS_12SemanticInfoE
    void _reconstructParseStack(CommandRegistry::ParseToken const*, CommandRegistry::SemanticInfo &)const; // _ZNK15CommandRegistry22_reconstructParseStackEPKNS_10ParseTokenERNS_12SemanticInfoE
    std::string describe(CommandRegistry::Symbol)const; // _ZNK15CommandRegistry8describeB5cxx11ENS_6SymbolE
    std::string describe(CommandParameterData const&)const; // _ZNK15CommandRegistry8describeB5cxx11ERK20CommandParameterData
    void describe(CommandRegistry::Signature const&, std::string const&, CommandRegistry::Overload const&, unsigned int, unsigned int *, unsigned int *)const; // _ZNK15CommandRegistry8describeERKNS_9SignatureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_8OverloadEjPjSE_
    void getCommandOverloadSyntaxInformation(CommandOrigin const&, std::string const&)const; // _ZNK15CommandRegistry35getCommandOverloadSyntaxInformationERK13CommandOriginRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void originCanRun(CommandOrigin const&, CommandRegistry::Overload const&)const; // _ZNK15CommandRegistry12originCanRunERK13CommandOriginRKNS_8OverloadE
    void getAliases(std::string const&)const; // _ZNK15CommandRegistry10getAliasesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool canCommandBeUsed(std::string const&, CommandPermissionLevel const&, bool)const; //TODO: incomplete function definition // _ZNK15CommandRegistry16canCommandBeUsedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK22CommandPermissionLevelb
//  void checkOriginCommandFlags(CommandOrigin const&, CommandFlag, CommandPermissionLevel)const; //TODO: incomplete function definition // _ZNK15CommandRegistry23checkOriginCommandFlagsERK13CommandOrigin11CommandFlag22CommandPermissionLevel
//  void _matchesEnumConstraintsExcept(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const; //TODO: incomplete function definition // _ZNK15CommandRegistry29_matchesEnumConstraintsExceptERKNS_6SymbolERK13CommandOriginS2_18SemanticConstraint
    void originCanRunOverloadWithParam(CommandOrigin const&, CommandParameterData const&)const; // _ZNK15CommandRegistry29originCanRunOverloadWithParamERK13CommandOriginRK20CommandParameterData
    void _getConstrainedParamEnumSymbol(CommandParameterData const&)const; // _ZNK15CommandRegistry30_getConstrainedParamEnumSymbolERK20CommandParameterData
    void _getConstrainedParamEnumSymbol(CommandRegistry::Symbol)const; // _ZNK15CommandRegistry30_getConstrainedParamEnumSymbolENS_6SymbolE
    void _isParamFullyParsed(CommandRegistry::ParseToken const*)const; // _ZNK15CommandRegistry19_isParamFullyParsedEPKNS_10ParseTokenE
    void _findValueConstraints(CommandRegistry::Symbol const&, CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry21_findValueConstraintsERKNS_6SymbolES2_
    void _matchesEnumConstraints(CommandParameterData const&, CommandOrigin const&, CommandRegistry::ParseToken const&)const; // _ZNK15CommandRegistry23_matchesEnumConstraintsERK20CommandParameterDataRK13CommandOriginRKNS_10ParseTokenE
//  void _matchesEnumConstraintsSet(CommandRegistry::Symbol const&, CommandOrigin const&, CommandRegistry::Symbol const&, SemanticConstraint)const; //TODO: incomplete function definition // _ZNK15CommandRegistry26_matchesEnumConstraintsSetERKNS_6SymbolERK13CommandOriginS2_18SemanticConstraint
    void getOverloadSyntaxInformation(CommandOrigin const&, std::string const&, unsigned int)const; // _ZNK15CommandRegistry28getOverloadSyntaxInformationERK13CommandOriginRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj
    std::string symbolToString(CommandRegistry::Symbol)const; // _ZNK15CommandRegistry14symbolToStringB5cxx11ENS_6SymbolE
    bool hasCommands()const; // _ZNK15CommandRegistry11hasCommandsEv
    bool hasState(); // _ZN15CommandRegistry8hasStateEv
    void pushState(); // _ZN15CommandRegistry9pushStateEv
    void popState(); // _ZN15CommandRegistry8popStateEv
    void serializeAvailableCommands()const; // _ZNK15CommandRegistry26serializeAvailableCommandsEv
    void loadRemoteCommands(AvailableCommandsPacket const&); // _ZN15CommandRegistry18loadRemoteCommandsERK23AvailableCommandsPacket
    void setNetworkUpdateCallback(std::function<void (Packet const&)>); // _ZN15CommandRegistry24setNetworkUpdateCallbackESt8functionIFvRK6PacketEE
    void setScoreCallback(std::function<int (bool &, std::string const&, Actor const&)>); // _ZN15CommandRegistry16setScoreCallbackESt8functionIFiRbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK5ActorEE
    ~CommandRegistry(); // _ZN15CommandRegistryD2Ev
    class ConstrainedValue {

    public:
        ConstrainedValue(std::pair<unsigned long, unsigned int> const&); // _ZN15CommandRegistry16ConstrainedValueC2ERKSt4pairImjE
        ConstrainedValue(CommandRegistry::ConstrainedValue &&); // _ZN15CommandRegistry16ConstrainedValueC2EOS0_
        ~ConstrainedValue(); // _ZN15CommandRegistry16ConstrainedValueD2Ev
    };
    class Enum {

    public:
//      Enum(std::string const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition // _ZN15CommandRegistry4EnumC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE8typeid_tIS_EMS_KFbPvRKNS_10ParseTokenERK13CommandOriginiRS6_RSt6vectorIS6_SaIS6_EEE
        Enum(CommandRegistry::Enum &&); // _ZN15CommandRegistry4EnumC2EOS0_
        ~Enum(); // _ZN15CommandRegistry4EnumD2Ev
    };
    class Factorization {

    public:
        Factorization(CommandRegistry::Symbol); // _ZN15CommandRegistry13FactorizationC2ENS_6SymbolE
        Factorization(CommandRegistry::Factorization &&); // _ZN15CommandRegistry13FactorizationC2EOS0_
    };
    class LexicalToken {

    public:
        LexicalToken(CommandRegistry const&); // _ZN15CommandRegistry12LexicalTokenC2ERKS_
        void operator==(CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry12LexicalTokeneqERKNS_6SymbolE
        void operator!=(CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry12LexicalTokenneERKNS_6SymbolE
    };
    class OptionalParameterChain {

    public:
        OptionalParameterChain(int, int, CommandRegistry::Symbol); // _ZN15CommandRegistry22OptionalParameterChainC2EiiNS_6SymbolE
        OptionalParameterChain(CommandRegistry::OptionalParameterChain const&); // _ZN15CommandRegistry22OptionalParameterChainC2ERKS0_
    };
    class Overload {

    public:
        Overload(CommandRegistry::Overload &&); // _ZN15CommandRegistry8OverloadC2EOS0_
        ~Overload(); // _ZN15CommandRegistry8OverloadD2Ev
//      Overload(CommandVersion, std::unique_ptr<Command> ((void), ); //TODO: incomplete function definition // _ZN15CommandRegistry8OverloadC2E14CommandVersionPFSt10unique_ptrI7CommandSt14default_deleteIS3_EEvE
    };
    class ParamSymbols {

    public:
        ParamSymbols(); // _ZN15CommandRegistry12ParamSymbolsC2Ev
    };
    class ParseRule {

    public:
        ParseRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion); // _ZN15CommandRegistry9ParseRuleC2ENS_6SymbolEOSt6vectorIS1_SaIS1_EESt8functionIFPNS_10ParseTokenERS7_S1_EE14CommandVersion
        ParseRule(CommandRegistry::ParseRule &&); // _ZN15CommandRegistry9ParseRuleC2EOS0_
        ~ParseRule(); // _ZN15CommandRegistry9ParseRuleD2Ev
    };
    class ParseTable {

    public:
        ~ParseTable(); // _ZN15CommandRegistry10ParseTableD2Ev
        ParseTable(); // _ZN15CommandRegistry10ParseTableC2Ev
    };
    class ParseToken {

    public:
        ~ParseToken(); // _ZN15CommandRegistry10ParseTokenD2Ev
        ParseToken(CommandRegistry::Symbol, CommandRegistry::ParseToken *); // _ZN15CommandRegistry10ParseTokenC2ENS_6SymbolEPS0_
        std::string toString()const; // _ZNK15CommandRegistry10ParseToken8toStringB5cxx11Ev
    };
    class Parser {

    public:
        ~Parser(); // _ZN15CommandRegistry6ParserD2Ev
        Parser(CommandRegistry const&, int); // _ZN15CommandRegistry6ParserC2ERKS_i
        void parse(std::string const&); // _ZN15CommandRegistry6Parser5parseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void _findParsePrediction(CommandRegistry::LexicalToken const&, CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry6Parser20_findParsePredictionERKNS_12LexicalTokenERKNS_6SymbolE
        std::string getErrorMessage()const; // _ZNK15CommandRegistry6Parser15getErrorMessageB5cxx11Ev
        std::string getErrorParams()const; // _ZNK15CommandRegistry6Parser14getErrorParamsB5cxx11Ev
        void createCommand(CommandOrigin const&); // _ZN15CommandRegistry6Parser13createCommandERK13CommandOrigin
    };
    class RegistryState {

    public:
        RegistryState(); // _ZN15CommandRegistry13RegistryStateC2Ev
        ~RegistryState(); // _ZN15CommandRegistry13RegistryStateD2Ev
        RegistryState(CommandRegistry::RegistryState const&); // _ZN15CommandRegistry13RegistryStateC2ERKS0_
        RegistryState(CommandRegistry::RegistryState &&); // _ZN15CommandRegistry13RegistryStateC2EOS0_
    };
    class SemanticInfo {

    public:
        void reset(); // _ZN15CommandRegistry12SemanticInfo5resetEv
        SemanticInfo(); // _ZN15CommandRegistry12SemanticInfoC2Ev
        ~SemanticInfo(); // _ZN15CommandRegistry12SemanticInfoD2Ev
    };
    class Signature {

    public:
//      Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag); //TODO: incomplete function definition // _ZN15CommandRegistry9SignatureC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKc22CommandPermissionLevelNS_6SymbolE11CommandFlag
        ~Signature(); // _ZN15CommandRegistry9SignatureD2Ev
        Signature(CommandRegistry::Signature &&); // _ZN15CommandRegistry9SignatureC2EOS0_
    };
    class SoftEnum {

    public:
        SoftEnum(std::string const&, std::vector<std::string>); // _ZN15CommandRegistry8SoftEnumC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EE
        ~SoftEnum(); // _ZN15CommandRegistry8SoftEnumD2Ev
        SoftEnum(CommandRegistry::SoftEnum &&); // _ZN15CommandRegistry8SoftEnumC2EOS0_
    };
    class Symbol {

    public:
        Symbol(); // _ZN15CommandRegistry6SymbolC2Ev
        Symbol(unsigned long); // _ZN15CommandRegistry6SymbolC2Em
//      Symbol(CommandLexer::TokenType); //TODO: incomplete function definition // _ZN15CommandRegistry6SymbolC2EN12CommandLexer9TokenTypeE
//      Symbol(CommandRegistry::HardNonTerminal); //TODO: incomplete function definition // _ZN15CommandRegistry6SymbolC2ENS_15HardNonTerminalE
        Symbol(CommandRegistry::Symbol const&); // _ZN15CommandRegistry6SymbolC2ERKS0_
        void operator==(CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry6SymboleqERKS0_
        void operator!=(CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry6SymbolneERKS0_
        void operator<(CommandRegistry::Symbol const&)const; // _ZNK15CommandRegistry6SymbolltERKS0_
        void fromEnumIndex(unsigned long); // _ZN15CommandRegistry6Symbol13fromEnumIndexEm
        void fromOptionalIndex(unsigned long); // _ZN15CommandRegistry6Symbol17fromOptionalIndexEm
        void fromFactorizationIndex(unsigned long); // _ZN15CommandRegistry6Symbol22fromFactorizationIndexEm
        void fromPostfixIndex(unsigned long); // _ZN15CommandRegistry6Symbol16fromPostfixIndexEm
        void fromEnumValueIndex(unsigned long); // _ZN15CommandRegistry6Symbol18fromEnumValueIndexEm
        void fromSoftEnumIndex(unsigned long); // _ZN15CommandRegistry6Symbol17fromSoftEnumIndexEm
        void toIndex()const; // _ZNK15CommandRegistry6Symbol7toIndexEv
        void value()const; // _ZNK15CommandRegistry6Symbol5valueEv
        bool isTerminal()const; // _ZNK15CommandRegistry6Symbol10isTerminalEv
        bool isEnum()const; // _ZNK15CommandRegistry6Symbol6isEnumEv
        bool isOptional()const; // _ZNK15CommandRegistry6Symbol10isOptionalEv
        bool isFactorization()const; // _ZNK15CommandRegistry6Symbol15isFactorizationEv
        bool isPostfix()const; // _ZNK15CommandRegistry6Symbol9isPostfixEv
        bool isEnumValue()const; // _ZNK15CommandRegistry6Symbol11isEnumValueEv
        bool isSoftEnum()const; // _ZNK15CommandRegistry6Symbol10isSoftEnumEv
    };
};
