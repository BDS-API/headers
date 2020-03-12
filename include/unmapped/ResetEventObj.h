#pragma once



class ResetEventObj {

public:
//  void wait_until(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void wait();
    ~ResetEventObj();
    void reset();
    ResetEventObj(bool, bool);
    void set();
//  void wait_for(std::chrono::duration<long, std::ratio<1l, 1000l>> const&); //TODO: incomplete function definition
};
