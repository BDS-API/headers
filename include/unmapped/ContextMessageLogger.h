#pragma once



class ContextMessageLogger {

public:
    virtual ContextMessageLogger::~ContextMessageLogger()

    ContextMessageLogger(ContextMessageLoggerOptions const&);
    void shouldOutputAllMessagesOnDestruction();
    void log(LogArea, LogLevel, char const*);
    void didReceiveMessages()const;
    void didReceiveMessageOfType(LogLevel)const;
    void shouldMessagePostToParentMessageLoggers();
    void getMessageArray()const;
};
