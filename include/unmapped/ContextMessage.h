#pragma once

#include <string>


class ContextMessage {

public:
    ContextMessage(ContextMessage &&);
    ContextMessage(ContextMessage const&);
    ~ContextMessage();
//  ContextMessage(LogArea, LogLevel, std::string const&); //TODO: incomplete function definition
};
