#pragma once

class StopwatchHandler {

public:

    void get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void clear(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void clearAll(void);
    void print(void);
    void printEvery(int);
};
