#pragma once

#include <exception>


class DebugAssertException : std::exception {

public:
    static long WHAT;

    virtual void what()const;
    ~DebugAssertException();
    void setFunction(char const*);
    DebugAssertException(DebugAssertException const&);
    DebugAssertException(char const*, char const*, char const*, int, char const*, char const*);
    void setDescription(char const*);
    void setArgument(char const*);
    void clear();
    void setInfo(char const*);
    DebugAssertException();
    void enable();
    bool isEnabled();
    void disable();
    void setFile(char const*);
};
