#pragma once

#include <string>
#include <memory>
#include <vector>


class CommandOutput {

public:
    ~CommandOutput(); // _ZN13CommandOutputD2Ev
//  CommandOutput(CommandOutputType); //TODO: incomplete function definition // _ZN13CommandOutputC2E17CommandOutputType
    CommandOutput(CommandOutput const&); // _ZN13CommandOutputC2ERKS_
//  void load(CommandOutputType, int, std::vector<CommandOutputMessage> &&, std::unique_ptr<CommandPropertyBag> &&); //TODO: incomplete function definition // _ZN13CommandOutput4loadE17CommandOutputTypeiOSt6vectorI20CommandOutputMessageSaIS2_EEOSt10unique_ptrI18CommandPropertyBagSt14default_deleteIS7_EE
    void error(std::string const&, std::vector<CommandOutputParameter> const&); // _ZN13CommandOutput5errorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI22CommandOutputParameterSaIS9_EE
//  void addMessage(std::string const&, std::vector<CommandOutputParameter> const&, CommandOutputMessageType); //TODO: incomplete function definition // _ZN13CommandOutput10addMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI22CommandOutputParameterSaIS9_EE24CommandOutputMessageType
    void forceOutput(std::string const&, std::vector<CommandOutputParameter> const&); // _ZN13CommandOutput11forceOutputERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI22CommandOutputParameterSaIS9_EE
    void success(std::string const&, std::vector<CommandOutputParameter> const&); // _ZN13CommandOutput7successERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI22CommandOutputParameterSaIS9_EE
    void success(); // _ZN13CommandOutput7successEv
    std::string getMessageParams(std::vector<CommandOutputParameter> const&); // _ZN13CommandOutput16getMessageParamsB5cxx11ERKSt6vectorI22CommandOutputParameterSaIS1_EE
    void getSuccessCount()const; // _ZNK13CommandOutput15getSuccessCountEv
    bool wantsData()const; // _ZNK13CommandOutput9wantsDataEv
    void empty()const; // _ZNK13CommandOutput5emptyEv
    void getData()const; // _ZNK13CommandOutput7getDataEv
    void addToResultList(std::string const&, std::string const&); // _ZN13CommandOutput15addToResultListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void addToResultList(std::string const&, Actor const&); // _ZN13CommandOutput15addToResultListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK5Actor
    void getType()const; // _ZNK13CommandOutput7getTypeEv
    void getMessages()const; // _ZNK13CommandOutput11getMessagesEv
};
