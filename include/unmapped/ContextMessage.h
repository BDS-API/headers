#pragma once

#include "./ContextMessage.h"
#include <string>


class ContextMessage {

public:

//  ContextMessage(LogArea, LogLevel, std::string const&); //TODO: incomplete function definition
    ~ContextMessage();
    ContextMessage(ContextMessage &&);
    ContextMessage(ContextMessage const&);
};
