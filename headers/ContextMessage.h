#pragma once

class ContextMessage {

public:

    void ContextMessage(LogArea, LogLevel, std::string const&);
    void ContextMessage(ContextMessage&&);
    void ContextMessage(ContextMessage const&);
};
