#pragma once

#include <string>
#include <functional>


namespace DebugUtils {

    static long gShouldDebugBreak;
    static long gShouldPresentDialog;
    static long assertHandler;
    static long gTelemetryRegistered;
    static std::string gFireAssertTelemetry;
    static std::string gFireCrashedTelemetry;
    static std::string gp_modal_presenter;
    static long gp_assert_handler;

    void DEFAULT_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool); // _ZN10DebugUtils22DEFAULT_ASSERT_HANDLEREPKcS1_S1_biS1_S1_b
    void REGISTER_ASSERT_TELEMETRY(std::function<void (std::string &)>); // _ZN10DebugUtils25REGISTER_ASSERT_TELEMETRYESt8functionIFvRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    void UNREGISTER_ASSERT_TELEMETRY(); // _ZN10DebugUtils27UNREGISTER_ASSERT_TELEMETRYEv
    void REGISTER_CRASHED_TELEMETRY(std::function<void (std::string const&, std::string const&)>); // _ZN10DebugUtils26REGISTER_CRASHED_TELEMETRYESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EE
    void UNREGISTER_CRASHED_TELEMETRY(); // _ZN10DebugUtils28UNREGISTER_CRASHED_TELEMETRYEv
    void _fireAssertTelemetry(std::string &); // _ZN10DebugUtils20_fireAssertTelemetryERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void fireCrashedTelemetry(std::string const&, std::string const&); // _ZN10DebugUtils20fireCrashedTelemetryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void PUBLISH_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool); // _ZN10DebugUtils22PUBLISH_ASSERT_HANDLEREPKcS1_S1_biS1_S1_b
    void SET_THREAD_NAME(std::string const&); // _ZN10DebugUtils15SET_THREAD_NAMEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void handleAssert(char const*, char const*, char const*, bool, int, char const*, char const*, bool); // _ZN10DebugUtils12handleAssertEPKcS1_S1_biS1_S1_b
};
