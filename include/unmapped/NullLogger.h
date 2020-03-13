#pragma once



class NullLogger /*leveldb::Logger*/ { //TODO: incomplete class definition

public:
    static long instance;

    ~NullLogger(); // _ZN10NullLoggerD2Ev
//  virtual void Logv(char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN10NullLogger4LogvEPKcP13__va_list_tag
    NullLogger(); // _ZN10NullLoggerC2Ev
};
