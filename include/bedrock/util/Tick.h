#pragma once



class Tick {

public:
    static long MAX;

    void operator<=(Tick const&)const;
    void operator+(int)const;
    void operator>(Tick const&)const;
    Tick(unsigned long);
    void operator!=(Tick const&)const;
    unsigned long getTimeStamp()const;
    void operator==(Tick const&)const;
    void operator>=(Tick const&)const;
    void operator<(Tick const&)const;
    Tick();
    Tick(Tick const&);
};
