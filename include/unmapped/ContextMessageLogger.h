#pragma once

#include "ContextMessageLoggerOptions.h"


class ContextMessageLogger {

public:
    ~ContextMessageLogger();
//  std::string getMessageArray(LogArea)const; //TODO: incomplete function definition
//  void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    void shouldOutputAllMessagesOnDestruction();
    void shouldMessagePostToParentMessageLoggers();
//  std::string getMessageArray(LogArea, LogLevel)const; //TODO: incomplete function definition
    ContextMessageLogger(ContextMessageLoggerOptions const&);
    std::string getMessage()const;
//  std::string getMessageArray(LogLevel)const; //TODO: incomplete function definition
//  void didReceiveMessageOfType(LogLevel)const; //TODO: incomplete function definition
    void didReceiveMessages()const;
    void getMessageArray()const;
};
