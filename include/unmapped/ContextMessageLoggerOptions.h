#pragma once



class ContextMessageLoggerOptions {

public:

    ContextMessageLoggerOptions();
    void storeAllMessages();
//  void storeMessages(LogLevel, bool); //TODO: incomplete function definition
//  void assertIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition
//  void assertInDestructorIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition
    void outputAllMessagesOnDestruction();
    void allowMessagesToPostToParentMessageLoggers();
//  void shouldStoreMessages(LogLevel); //TODO: incomplete function definition
//  void shouldAssertIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition
//  void shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition
    void shouldMessagePostToParentMessageLoggers();
    void shouldOutputAllMessagesOnDestruction();
};
