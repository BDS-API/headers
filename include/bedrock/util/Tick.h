#pragma once

#include "./Tick.h"


class Tick {

public:
    static long MAX;


    Tick();
    Tick(unsigned long);
    Tick(Tick const&);
    void getTimeStamp()const;
    void operator!=(Tick const&)const;
    void operator<(Tick const&)const;
    void operator+(int)const;
    void operator>(Tick const&)const;
    void operator>=(Tick const&)const;
    void operator<=(Tick const&)const;
    void operator==(Tick const&)const;
};
