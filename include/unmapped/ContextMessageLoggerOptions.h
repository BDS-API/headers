#pragma once



class ContextMessageLoggerOptions {

public:
//  void storeMessages(LogLevel, bool); //TODO: incomplete function definition
    void allowMessagesToPostToParentMessageLoggers();
//  void shouldAssertIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition
//  void shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition
//  void assertInDestructorIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition
    void outputAllMessagesOnDestruction();
    ContextMessageLoggerOptions();
//  void shouldStoreMessages(LogLevel); //TODO: incomplete function definition
//  void assertIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition
    void shouldMessagePostToParentMessageLoggers();
    void storeAllMessages();
    void shouldOutputAllMessagesOnDestruction();
};
