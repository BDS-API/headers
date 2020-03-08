#pragma once



class Tick {

public:
    static long MAX;


    Tick(void);
    Tick(unsigned long);
    Tick(Tick const&);
    unsigned long getTimeStamp()const;
};
