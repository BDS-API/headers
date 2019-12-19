#pragma once

class DebugAssertException : std::exception {

public:
    static long WHAT;

    virtual ~DebugAssertException();
    virtual void what(void)const;

    void enable(void);
    void disable(void);
    bool isEnabled(void);
    void DebugAssertException(void);
    void DebugAssertException(char const*, char const*, char const*, int, char const*, char const*);
    void DebugAssertException(DebugAssertException const&);
    void clear(void);
    void setDescription(char const*);
    void setArgument(char const*);
    void setInfo(char const*);
    void setFile(char const*);
    void setFunction(char const*);
};
