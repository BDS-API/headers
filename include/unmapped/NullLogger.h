#pragma once



class NullLogger /*public leveldb::Logger*/ { //TODO: incomplete class definition

public:
    static long instance;

    virtual ~NullLogger(); // _ZN10NullLoggerD2Ev
    virtual void __fake_function0(); // fake
    virtual void Logv__incomplete0(char const*, long *); //TODO: incomplete function definition // _ZN10NullLogger4LogvEPKcP13__va_list_tag
    NullLogger(); // _ZN10NullLoggerC2Ev
};
