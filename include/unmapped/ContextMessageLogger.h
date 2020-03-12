#pragma once

#include <string>


class ContextMessageLogger {

public:
    ~ContextMessageLogger();
    ContextMessageLogger(ContextMessageLoggerOptions const&);
    std::string getMessage()const;
//  std::string getMessageArray(LogArea, LogLevel)const; //TODO: incomplete function definition
    void shouldOutputAllMessagesOnDestruction();
//  void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    void didReceiveMessages()const;
    void shouldMessagePostToParentMessageLoggers();
    void getMessageArray()const;
//  std::string getMessageArray(LogArea)const; //TODO: incomplete function definition
//  std::string getMessageArray(LogLevel)const; //TODO: incomplete function definition
//  void didReceiveMessageOfType(LogLevel)const; //TODO: incomplete function definition
};
