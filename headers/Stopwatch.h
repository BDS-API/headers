#pragma once

class Stopwatch {

public:
    virtual ~Stopwatch();
    virtual void stop(void);
    virtual void stopContinue(void);
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void Stopwatch(void);
    void getLast(void);
    void getMax(void);
    void reset(void);
    void start(void);
    void getTotal(void);
    void getCount(void);
    void tick(void);
    bool isReset(void)const;
    void printEvery(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
