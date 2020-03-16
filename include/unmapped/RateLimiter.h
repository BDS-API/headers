#pragma once



class RateLimiter {

public:
//    RateLimiter(unsigned long, long); //TODO: incomplete function definition // _ZN11RateLimiterC2EmNSt6chrono8durationIlSt5ratioILl1ELl1EEEE
    bool isWithinLimit()const; // _ZNK11RateLimiter13isWithinLimitEv
    void getNextAvailableTimePoint()const; // _ZNK11RateLimiter25getNextAvailableTimePointEv
    void tryAddInstance(); // _ZN11RateLimiter14tryAddInstanceEv
};
