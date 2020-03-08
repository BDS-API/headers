#pragma once



class ResetEventObj {

public:

    ResetEventObj(bool, bool);
    void set();
    void reset();
    void wait();
    void wait_until(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void wait_for(std::chrono::duration<long, std::ratio<1l, 1000l>> const&);
};
