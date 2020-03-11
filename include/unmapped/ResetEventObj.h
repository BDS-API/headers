#pragma once

#include <ratio>


class ResetEventObj {

public:

    ~ResetEventObj();
    ResetEventObj(bool, bool);
    void set();
    void reset();
    void wait();
//  void wait_until(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
//  void wait_for(std::chrono::duration<long, std::ratio<1l, 1000l>> const&); //TODO: incomplete function definition
};
