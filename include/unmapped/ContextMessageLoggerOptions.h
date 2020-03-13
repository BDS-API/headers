#pragma once



class ContextMessageLoggerOptions {

public:
    ContextMessageLoggerOptions(); // _ZN27ContextMessageLoggerOptionsC2Ev
    void storeAllMessages(); // _ZN27ContextMessageLoggerOptions16storeAllMessagesEv
//  void storeMessages(LogLevel, bool); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions13storeMessagesE8LogLevelb
//  void assertIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions30assertIfMessageTypeWasReceivedE8LogLevelb
//  void assertInDestructorIfMessageTypeWasReceived(LogLevel, bool); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions42assertInDestructorIfMessageTypeWasReceivedE8LogLevelb
    void outputAllMessagesOnDestruction(); // _ZN27ContextMessageLoggerOptions30outputAllMessagesOnDestructionEv
    void allowMessagesToPostToParentMessageLoggers(); // _ZN27ContextMessageLoggerOptions41allowMessagesToPostToParentMessageLoggersEv
//  void shouldStoreMessages(LogLevel); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions19shouldStoreMessagesE8LogLevel
//  void shouldAssertIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions36shouldAssertIfMessageTypeWasReceivedE8LogLevel
//  void shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions48shouldAssertInDestructorIfMessageTypeWasReceivedE8LogLevel
    void shouldMessagePostToParentMessageLoggers(); // _ZN27ContextMessageLoggerOptions39shouldMessagePostToParentMessageLoggersEv
    void shouldOutputAllMessagesOnDestruction(); // _ZN27ContextMessageLoggerOptions36shouldOutputAllMessagesOnDestructionEv
};
