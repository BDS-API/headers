#pragma once

class ContextMessageLoggerOptions {

public:

    void ContextMessageLoggerOptions(void);
    void storeAllMessages(void);
    void storeMessages(LogLevel, bool);
    void assertIfMessageTypeWasReceived(LogLevel, bool);
    void assertInDestructorIfMessageTypeWasReceived(LogLevel, bool);
    void outputAllMessagesOnDestruction(void);
    void allowMessagesToPostToParentMessageLoggers(void);
    void shouldStoreMessages(LogLevel);
    void shouldAssertIfMessageTypeWasReceived(LogLevel);
    void shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel);
    void shouldMessagePostToParentMessageLoggers(void);
    void shouldOutputAllMessagesOnDestruction(void);
};
