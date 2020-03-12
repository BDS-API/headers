#pragma once



namespace RakNet {

    class BPSTracker {

    public:
        class TimeAndValue2;

        BPSTracker();
        void Reset(char const*, unsigned int);
        ~BPSTracker();
        void GetBPS1Threadsafe(unsigned long);
        void GetBPS1(unsigned long);
        void GetTotal1()const;
        void ClearExpired1(unsigned long);
        void Push1(unsigned long, unsigned long);
        class TimeAndValue2 {

        public:
            ~TimeAndValue2();
            TimeAndValue2(unsigned long, unsigned long);
            TimeAndValue2();
        };
    };
}
