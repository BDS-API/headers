#pragma once

class PerfTimer {

public:
    static long MultiplyDeBruijnBitPosition;
    static long mPath[abi:cxx11];
    static long test;
    static long mEnabled;


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
    void startEventTimerForLog(std::string const&);
    void stopEventTimerForLog(std::string const&);
};
