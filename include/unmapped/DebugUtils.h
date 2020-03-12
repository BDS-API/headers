#pragma once

#include <functional>
#include <string>


namespace DebugUtils {

    static long gShouldDebugBreak;
    static long gShouldPresentDialog;
    static long assertHandler;
    static long gTelemetryRegistered;
    static std::string gFireAssertTelemetry;
    static std::string gFireCrashedTelemetry;
    static std::string gp_modal_presenter;
    static long gp_assert_handler;

    void fireCrashedTelemetry(std::string const&, std::string const&);
    void UNREGISTER_CRASHED_TELEMETRY();
    void _fireAssertTelemetry(std::string &);
    void PUBLISH_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void REGISTER_CRASHED_TELEMETRY(std::function<void (std::string const&, std::string const&)>);
    void UNREGISTER_ASSERT_TELEMETRY();
    void handleAssert(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void REGISTER_ASSERT_TELEMETRY(std::function<void (std::string &)>);
    void DEFAULT_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void SET_THREAD_NAME(std::string const&);
};
