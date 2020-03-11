#pragma once

#include <ratio>


class RateLimiter {

public:

//  RateLimiter(unsigned long, std::chrono::duration<long, std::ratio<1l, 1l>>); //TODO: incomplete function definition
    bool isWithinLimit()const;
    void getNextAvailableTimePoint()const;
    void tryAddInstance();
};
