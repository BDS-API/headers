#pragma once

class RakNet::BPSTracker {

public:

    void BPSTracker(void);
    void Reset(char const*, unsigned int);
    void GetTotal1(void)const;
    void ClearExpired1(unsigned long);
    void Push1(unsigned long, unsigned long);
    void GetBPS1(unsigned long);
    void GetBPS1Threadsafe(unsigned long);
};
