#pragma once



class Tick {

public:
    static long MAX;


    Tick(void);
    Tick(unsigned long);
    Tick(Tick const&);
    void getTimeStamp(void)const;
};
