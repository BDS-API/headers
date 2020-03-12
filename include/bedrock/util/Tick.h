#pragma once



class Tick {

public:
    static long MAX;

    unsigned long getTimeStamp()const;
    void operator>(Tick const&)const;
    void operator==(Tick const&)const;
    Tick();
    void operator<(Tick const&)const;
    void operator<=(Tick const&)const;
    void operator+(int)const;
    void operator!=(Tick const&)const;
    Tick(Tick const&);
    void operator>=(Tick const&)const;
    Tick(unsigned long);
};
