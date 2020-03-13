#pragma once

#include <string>


class ContextMessage {

public:
//  ContextMessage(LogArea, LogLevel, std::string const&); //TODO: incomplete function definition // _ZN14ContextMessageC2E7LogArea8LogLevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~ContextMessage(); // _ZN14ContextMessageD2Ev
    ContextMessage(ContextMessage &&); // _ZN14ContextMessageC2EOS_
    ContextMessage(ContextMessage const&); // _ZN14ContextMessageC2ERKS_
};
