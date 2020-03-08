#pragma once



class NullLogger : leveldb::Logger {

public:
    static long instance;

    NullLogger::~NullLogger()
    virtual void Logv(char const*, __va_list_tag *);

    NullLogger(void);
};
