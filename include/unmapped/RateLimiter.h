#pragma once



class RateLimiter {

public:

    RateLimiter(unsigned long, std::chrono::duration<long, std::ratio<1l, 1l>>);
    bool isWithinLimit(void)const;
    void getNextAvailableTimePoint(void)const;
    void tryAddInstance(void);
};
