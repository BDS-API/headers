#pragma once

#include <string>


class ContextMessageLogger {

public:
    ~ContextMessageLogger(); // _ZN20ContextMessageLoggerD2Ev
    ContextMessageLogger(ContextMessageLoggerOptions const&); // _ZN20ContextMessageLoggerC2ERK27ContextMessageLoggerOptions
    void shouldOutputAllMessagesOnDestruction(); // _ZN20ContextMessageLogger36shouldOutputAllMessagesOnDestructionEv
//  void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition // _ZN20ContextMessageLogger3logE7LogArea8LogLevelPKc
    void didReceiveMessages()const; // _ZNK20ContextMessageLogger18didReceiveMessagesEv
//  void didReceiveMessageOfType(LogLevel)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger23didReceiveMessageOfTypeE8LogLevel
    void shouldMessagePostToParentMessageLoggers(); // _ZN20ContextMessageLogger39shouldMessagePostToParentMessageLoggersEv
    std::string getMessage()const; // _ZNK20ContextMessageLogger10getMessageB5cxx11Ev
    void getMessageArray()const; // _ZNK20ContextMessageLogger15getMessageArrayEv
//  std::string getMessageArray(LogArea)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger15getMessageArrayB5cxx11E7LogArea
//  std::string getMessageArray(LogLevel)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger15getMessageArrayB5cxx11E8LogLevel
//  std::string getMessageArray(LogArea, LogLevel)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger15getMessageArrayB5cxx11E7LogArea8LogLevel
};
