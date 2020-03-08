#pragma once



class DebugAssertException : std::exception {

public:
    static long WHAT;

    DebugAssertException::~DebugAssertException()
    virtual void what()const;

    void enable();
    void disable();
    bool isEnabled();
    DebugAssertException(void);
    DebugAssertException(char const*, char const*, char const*, int, char const*, char const*);
    DebugAssertException(DebugAssertException const&);
    void clear();
    void setDescription(char const*);
    void setArgument(char const*);
    void setInfo(char const*);
    void setFile(char const*);
    void setFunction(char const*);
};
