#pragma once

class StopwatchNLast : Stopwatch {

public:
    virtual ~StopwatchNLast();
    virtual void stop(void);
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void StopwatchNLast(int);
};
