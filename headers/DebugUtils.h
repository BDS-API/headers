#pragma once

class DebugUtils {

public:
    static long DebugUtils::gShouldDebugBreak;
    static long DebugUtils::gShouldPresentDialog;
    static long DebugUtils::assertHandler;
    static long DebugUtils::gTelemetryRegistered;
    static long DebugUtils::gp_assert_handler;


    void DEFAULT_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void REGISTER_ASSERT_TELEMETRY(std::function<void ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)>);
    void UNREGISTER_ASSERT_TELEMETRY(void);
    void _fireAssertTelemetry(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void PUBLISH_ASSERT_HANDLER(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
    void SET_THREAD_NAME(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void handleAssert(char const*, char const*, char const*, bool, int, char const*, char const*, bool);
};
