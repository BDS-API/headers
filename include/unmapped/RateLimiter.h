#pragma once



class RateLimiter {

public:

    RateLimiter(unsigned long, std::chrono::duration<long, std::ratio<1l, 1l>>);
    bool isWithinLimit()const;
    void getNextAvailableTimePoint()const;
    void tryAddInstance();
};
