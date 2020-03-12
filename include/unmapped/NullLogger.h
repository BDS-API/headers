#pragma once



class NullLogger /*leveldb::Logger*/ { //TODO: incomplete class definition

public:
    static long instance;

    ~NullLogger();
//  virtual void Logv(char const*, __va_list_tag *); //TODO: incomplete function definition
    NullLogger();
};
