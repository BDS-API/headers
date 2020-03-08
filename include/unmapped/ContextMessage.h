#pragma once



class ContextMessage {

public:

    ContextMessage(LogArea, LogLevel, std::string const&);
    ContextMessage(ContextMessage&&);
    ContextMessage(ContextMessage const&);
};
