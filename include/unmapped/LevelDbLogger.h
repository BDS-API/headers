#pragma once



class LevelDbLogger : leveldb::Logger {

public:
    LevelDbLogger::~LevelDbLogger()
    virtual void Logv(char const*, __va_list_tag *);

    LevelDbLogger(void);
};
