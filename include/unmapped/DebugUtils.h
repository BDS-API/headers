#pragma once



class DebugUtils {

public:
    static long gShouldDebugBreak;
    static long gShouldPresentDialog;
    static long assertHandler;
    static long gTelemetryRegistered;
    static long gFireAssertTelemetry[abi:cxx11];
    static long gFireCrashedTelemetry[abi:cxx11];
    static long gp_modal_presenter[abi:cxx11];
    static long gp_assert_handler;


    void DEFAULT_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void REGISTER_ASSERT_TELEMETRY(std::function<void ()(std::string &)>);
    void UNREGISTER_ASSERT_TELEMETRY();
    void REGISTER_CRASHED_TELEMETRY(std::function<void ()(std::string const&, std::string const&)>);
    void UNREGISTER_CRASHED_TELEMETRY();
    void _fireAssertTelemetry(std::string &);
    void fireCrashedTelemetry(std::string const&, std::string const&);
    void PUBLISH_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void SET_THREAD_NAME(std::string const&);
    void handleAssert(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
};
