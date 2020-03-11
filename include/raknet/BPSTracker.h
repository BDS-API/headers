#pragma once



namespace RakNet {

class BPSTracker {

public:

    BPSTracker();
    void Reset(char const*, unsigned int);
    ~BPSTracker();
    void GetTotal1()const;
    void ClearExpired1(unsigned long);
    void Push1(unsigned long, unsigned long);
    void GetBPS1(unsigned long);
    void GetBPS1Threadsafe(unsigned long);
};

}