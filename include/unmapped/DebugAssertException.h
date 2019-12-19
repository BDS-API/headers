#pragma once

class DebugAssertException : std::exception {

public:
    static long WHAT;

    virtual DebugAssertException::~DebugAssertException();
    virtual void what(void)const;

    void enable(void);
    void disable(void);
    bool isEnabled(void);
    DebugAssertException(void);
    DebugAssertException(char const*, char const*, char const*, int, char const*, char const*);
    DebugAssertException(DebugAssertException const&);
    void clear(void);
    void setDescription(char const*);
    void setArgument(char const*);
    void setInfo(char const*);
    void setFile(char const*);
    void setFunction(char const*);
};
