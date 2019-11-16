#pragma once

class NullLogger : leveldb::Logger {

    virtual void ~NullLogger();
    virtual void ~NullLogger();
    virtual void Logv(char const*, __va_list_tag *);
}
