#pragma once

class LevelDbLogger : leveldb::Logger {

public:
    virtual ~LevelDbLogger();
    virtual void Logv(char const*, __va_list_tag *);

    void LevelDbLogger(void);
};
