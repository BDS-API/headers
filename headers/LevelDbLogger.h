#pragma once

class LevelDbLogger : leveldb::Logger {

    virtual ~LevelDbLogger();
    virtual ~LevelDbLogger();
    virtual void Logv(char const*, __va_list_tag *);
}
