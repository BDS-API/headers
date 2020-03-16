#pragma once



class ContextMessageLoggerOptions {

public:
    ContextMessageLoggerOptions(); // _ZN27ContextMessageLoggerOptionsC2Ev
    void storeAllMessages(); // _ZN27ContextMessageLoggerOptions16storeAllMessagesEv
//    void storeMessages(long, bool); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions13storeMessagesE8LogLevelb
//    void assertIfMessageTypeWasReceived(long, bool); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions30assertIfMessageTypeWasReceivedE8LogLevelb
//    void assertInDestructorIfMessageTypeWasReceived(long, bool); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions42assertInDestructorIfMessageTypeWasReceivedE8LogLevelb
    void outputAllMessagesOnDestruction(); // _ZN27ContextMessageLoggerOptions30outputAllMessagesOnDestructionEv
    void allowMessagesToPostToParentMessageLoggers(); // _ZN27ContextMessageLoggerOptions41allowMessagesToPostToParentMessageLoggersEv
//    bool shouldStoreMessages(long); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions19shouldStoreMessagesE8LogLevel
//    bool shouldAssertIfMessageTypeWasReceived(long); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions36shouldAssertIfMessageTypeWasReceivedE8LogLevel
//    bool shouldAssertInDestructorIfMessageTypeWasReceived(long); //TODO: incomplete function definition // _ZN27ContextMessageLoggerOptions48shouldAssertInDestructorIfMessageTypeWasReceivedE8LogLevel
    bool shouldMessagePostToParentMessageLoggers(); // _ZN27ContextMessageLoggerOptions39shouldMessagePostToParentMessageLoggersEv
    bool shouldOutputAllMessagesOnDestruction(); // _ZN27ContextMessageLoggerOptions36shouldOutputAllMessagesOnDestructionEv
};
