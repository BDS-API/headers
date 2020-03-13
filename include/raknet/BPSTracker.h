#pragma once



namespace RakNet {

    class BPSTracker {

    public:
        class TimeAndValue2;

        BPSTracker(); // _ZN6RakNet10BPSTrackerC2Ev
        void Reset(char const*, unsigned int); // _ZN6RakNet10BPSTracker5ResetEPKcj
        ~BPSTracker(); // _ZN6RakNet10BPSTrackerD2Ev
        void GetTotal1()const; // _ZNK6RakNet10BPSTracker9GetTotal1Ev
        void ClearExpired1(unsigned long); // _ZN6RakNet10BPSTracker13ClearExpired1Em
        void Push1(unsigned long, unsigned long); // _ZN6RakNet10BPSTracker5Push1Emm
        void GetBPS1(unsigned long); // _ZN6RakNet10BPSTracker7GetBPS1Em
        void GetBPS1Threadsafe(unsigned long); // _ZN6RakNet10BPSTracker17GetBPS1ThreadsafeEm
        class TimeAndValue2 {

        public:
            TimeAndValue2(); // _ZN6RakNet10BPSTracker13TimeAndValue2C2Ev
            ~TimeAndValue2(); // _ZN6RakNet10BPSTracker13TimeAndValue2D2Ev
            TimeAndValue2(unsigned long, unsigned long); // _ZN6RakNet10BPSTracker13TimeAndValue2C2Emm
        };
    };
}
