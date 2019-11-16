#pragma once

class LevelDbLogger : leveldb::Logger {

    virtual void ~LevelDbLogger();
    virtual void ~LevelDbLogger();
    virtual void Logv(char const*, __va_list_tag *);
}
