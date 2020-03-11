#pragma once

#include <functional>
#include <string>


class DebugUtils {

public:
    static long gShouldDebugBreak;
    static long gShouldPresentDialog;
    static long assertHandler;
    static long gTelemetryRegistered;
    static std::string gFireAssertTelemetry;
    static std::string gFireCrashedTelemetry;
    static std::string gp_modal_presenter;
    static long gp_assert_handler;


    void DEFAULT_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
//  void REGISTER_ASSERT_TELEMETRY(std::function<void (std::string &)>); //TODO: incomplete function definition
    void UNREGISTER_ASSERT_TELEMETRY();
//  void REGISTER_CRASHED_TELEMETRY(std::function<void (std::string const&, std::string const&)>); //TODO: incomplete function definition
    void UNREGISTER_CRASHED_TELEMETRY();
    void _fireAssertTelemetry(std::string &);
    void fireCrashedTelemetry(std::string const&, std::string const&);
    void PUBLISH_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void SET_THREAD_NAME(std::string const&);
    void handleAssert(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
};
