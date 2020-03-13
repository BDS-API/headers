#pragma once

#include <string>
#include <vector>


class CommandOutputMessage {

public:
    ~CommandOutputMessage(); // _ZN20CommandOutputMessageD2Ev
//  CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string> &&); //TODO: incomplete function definition // _ZN20CommandOutputMessageC2E24CommandOutputMessageTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt6vectorIS6_SaIS6_EE
    CommandOutputMessage(CommandOutputMessage &&); // _ZN20CommandOutputMessageC2EOS_
    CommandOutputMessage(CommandOutputMessage const&); // _ZN20CommandOutputMessageC2ERKS_
    void getType()const; // _ZNK20CommandOutputMessage7getTypeEv
    std::string getMessageId()const; // _ZNK20CommandOutputMessage12getMessageIdB5cxx11Ev
    std::string getParams()const; // _ZNK20CommandOutputMessage9getParamsB5cxx11Ev
    std::string getUserMessage()const; // _ZNK20CommandOutputMessage14getUserMessageB5cxx11Ev
};
