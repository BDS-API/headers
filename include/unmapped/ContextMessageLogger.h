#pragma once

#include <string>


class ContextMessageLogger {

public:
    virtual ~ContextMessageLogger(); // _ZN20ContextMessageLoggerD2Ev
    virtual void __fake_function0(); // fake
    ContextMessageLogger(ContextMessageLoggerOptions const&); // _ZN20ContextMessageLoggerC2ERK27ContextMessageLoggerOptions
    bool shouldOutputAllMessagesOnDestruction(); // _ZN20ContextMessageLogger36shouldOutputAllMessagesOnDestructionEv
//    void log(long, long, char const*); //TODO: incomplete function definition // _ZN20ContextMessageLogger3logE7LogArea8LogLevelPKc
    void didReceiveMessages()const; // _ZNK20ContextMessageLogger18didReceiveMessagesEv
//    void didReceiveMessageOfType(long)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger23didReceiveMessageOfTypeE8LogLevel
    bool shouldMessagePostToParentMessageLoggers(); // _ZN20ContextMessageLogger39shouldMessagePostToParentMessageLoggersEv
    std::string getMessage()const; // _ZNK20ContextMessageLogger10getMessageB5cxx11Ev
    void getMessageArray()const; // _ZNK20ContextMessageLogger15getMessageArrayEv
//    std::string getMessageArray(long)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger15getMessageArrayB5cxx11E7LogArea
//    std::string getMessageArray(long)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger15getMessageArrayB5cxx11E8LogLevel
//    std::string getMessageArray(long, long)const; //TODO: incomplete function definition // _ZNK20ContextMessageLogger15getMessageArrayB5cxx11E7LogArea8LogLevel
};
