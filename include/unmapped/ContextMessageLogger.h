#pragma once



class ContextMessageLogger {

public:
    virtual ContextMessageLogger::~ContextMessageLogger();

    ContextMessageLogger(ContextMessageLoggerOptions const&);
    void shouldOutputAllMessagesOnDestruction(void);
    void log(LogArea, LogLevel, char const*);
    void didReceiveMessages(void)const;
    void didReceiveMessageOfType(LogLevel)const;
    void shouldMessagePostToParentMessageLoggers(void);
    void getMessageArray(void)const;
};
