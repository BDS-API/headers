#pragma once

#include "./ContextMessageLoggerOptions.h"
#include <string>


class ContextMessageLogger {

public:
    virtual ~ContextMessageLogger();

    ContextMessageLogger(ContextMessageLoggerOptions const&);
    void shouldOutputAllMessagesOnDestruction();
//  void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    void didReceiveMessages()const;
//  void didReceiveMessageOfType(LogLevel)const; //TODO: incomplete function definition
    void shouldMessagePostToParentMessageLoggers();
    std::string getMessage()const;
    void getMessageArray()const;
//  std::string getMessageArray(LogArea)const; //TODO: incomplete function definition
//  std::string getMessageArray(LogLevel)const; //TODO: incomplete function definition
//  std::string getMessageArray(LogArea, LogLevel)const; //TODO: incomplete function definition
};
