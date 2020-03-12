#pragma once



class RateLimiter {

public:
//  RateLimiter(unsigned long, std::chrono::duration<long, std::ratio<1l, 1l>>); //TODO: incomplete function definition
    void tryAddInstance();
    void getNextAvailableTimePoint()const;
    bool isWithinLimit()const;
};
