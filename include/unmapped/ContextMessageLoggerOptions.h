#pragma once



class ContextMessageLoggerOptions {

public:

    ContextMessageLoggerOptions(void);
    void storeAllMessages();
    void storeMessages(LogLevel, bool);
    void assertIfMessageTypeWasReceived(LogLevel, bool);
    void assertInDestructorIfMessageTypeWasReceived(LogLevel, bool);
    void outputAllMessagesOnDestruction();
    void allowMessagesToPostToParentMessageLoggers();
    void shouldStoreMessages(LogLevel);
    void shouldAssertIfMessageTypeWasReceived(LogLevel);
    void shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel);
    void shouldMessagePostToParentMessageLoggers();
    void shouldOutputAllMessagesOnDestruction();
};
