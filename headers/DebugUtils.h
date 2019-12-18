#pragma once

class DebugUtils {

public:
    static long DebugUtils::gShouldDebugBreak;
    static long DebugUtils::gShouldPresentDialog;
    static long DebugUtils::assertHandler;
    static long DebugUtils::gTelemetryRegistered;
    static long DebugUtils::gFireAssertTelemetry[abi:cxx11];
    static long DebugUtils::gp_modal_presenter[abi:cxx11];
    static long DebugUtils::gp_assert_handler;


    void DEFAULT_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void REGISTER_ASSERT_TELEMETRY(std::function<void ()(std::string &)>);
    void UNREGISTER_ASSERT_TELEMETRY(void);
    void _fireAssertTelemetry(std::string &);
    void PUBLISH_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void SET_THREAD_NAME(std::string const&);
    void handleAssert(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
};
