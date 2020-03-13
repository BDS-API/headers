#pragma once

#include <exception>


class DebugAssertException : std::exception {

public:
    static long WHAT;

    ~DebugAssertException(); // _ZN20DebugAssertExceptionD2Ev
    virtual void what()const; // _ZNK20DebugAssertException4whatEv
    void enable(); // _ZN20DebugAssertException6enableEv
    void disable(); // _ZN20DebugAssertException7disableEv
    bool isEnabled(); // _ZN20DebugAssertException9isEnabledEv
    DebugAssertException(); // _ZN20DebugAssertExceptionC2Ev
    DebugAssertException(char const*, char const*, char const*, int, char const*, char const*); // _ZN20DebugAssertExceptionC2EPKcS1_S1_iS1_S1_
    DebugAssertException(DebugAssertException const&); // _ZN20DebugAssertExceptionC2ERKS_
    void clear(); // _ZN20DebugAssertException5clearEv
    void setDescription(char const*); // _ZN20DebugAssertException14setDescriptionEPKc
    void setArgument(char const*); // _ZN20DebugAssertException11setArgumentEPKc
    void setInfo(char const*); // _ZN20DebugAssertException7setInfoEPKc
    void setFile(char const*); // _ZN20DebugAssertException7setFileEPKc
    void setFunction(char const*); // _ZN20DebugAssertException11setFunctionEPKc
};
