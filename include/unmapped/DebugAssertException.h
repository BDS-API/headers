#pragma once

#include <exception>


class DebugAssertException : std::exception {

public:
    static long WHAT;

    virtual void what()const;
    ~DebugAssertException();
    DebugAssertException(DebugAssertException const&);
    void setDescription(char const*);
    void setFile(char const*);
    void disable();
    void setArgument(char const*);
    void setInfo(char const*);
    void enable();
    void setFunction(char const*);
    void clear();
    bool isEnabled();
    DebugAssertException();
    DebugAssertException(char const*, char const*, char const*, int, char const*, char const*);
};
