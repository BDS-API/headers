#pragma once

class PerfTimer {

public:
    static long PerfTimer::MultiplyDeBruijnBitPosition;
    static long PerfTimer::test;
    static long PerfTimer::mEnabled;


    void PerfTimer(std::thread::id);
    void allocate(int);
    void _roundToPower2(unsigned int);
    void _getIdleQueue(int);
    void allocateNodes(std::vector<PerfTimer::Node *, std::allocator<PerfTimer::Node *>> &, int);
    void rawRelease(PerfTimer::Node *, int);
    void push(char const*, char const*, int);
    void pop(void);
    void serialize(PerfTimer::Node const*);
    void releaseNodeChildren(PerfTimer::Node *, int);
    void _getMostSignificantBit(int);
    void _getStringId(char const*);
    void init(Core::Path const&);
    void startEventTimerForLog(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void stopEventTimerForLog(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
