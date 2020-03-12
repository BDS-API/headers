#pragma once



class ContextMessageLoggerOptions {

public:
    void allowMessagesToPostToParentMessageLoggers();
    void shouldMessagePostToParentMessageLoggers();
//  void assertIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition
//  void shouldAssertIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition
    ContextMessageLoggerOptions();
//  void shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition
    void outputAllMessagesOnDestruction();
    void shouldOutputAllMessagesOnDestruction();
//  void assertInDestructorIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition
//  void storeMessages(LogLevel, bool); //TODO: incomplete function definition
//  void shouldStoreMessages(LogLevel); //TODO: incomplete function definition
    void storeAllMessages();
};
