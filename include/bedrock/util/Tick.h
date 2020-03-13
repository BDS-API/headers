#pragma once



class Tick {

public:
    static long MAX;

    Tick(); // _ZN4TickC2Ev
    Tick(unsigned long); // _ZN4TickC2Em
    Tick(Tick const&); // _ZN4TickC2ERKS_
    unsigned long getTimeStamp()const; // _ZNK4Tick12getTimeStampEv
    void operator!=(Tick const&)const; // _ZNK4TickneERKS_
    void operator<(Tick const&)const; // _ZNK4TickltERKS_
    void operator+(int)const; // _ZNK4TickplEi
    void operator>(Tick const&)const; // _ZNK4TickgtERKS_
    void operator>=(Tick const&)const; // _ZNK4TickgeERKS_
    void operator<=(Tick const&)const; // _ZNK4TickleERKS_
    void operator==(Tick const&)const; // _ZNK4TickeqERKS_
};
