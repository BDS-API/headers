#pragma once

class NullLogger : leveldb::Logger {

    virtual ~NullLogger();
    virtual ~NullLogger();
    virtual void Logv(char const*, __va_list_tag *);
}
