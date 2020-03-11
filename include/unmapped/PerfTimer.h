#pragma once

#include "./Node.h"
#include "../core/Path.h"
#include <memory>
#include <vector>
#include <string>


class PerfTimer {

public:
    static long MultiplyDeBruijnBitPosition;
    static std::string mPath;
    static long test;
    static long mEnabled;


//  PerfTimer(std::thread::id); //TODO: incomplete function definition
    ~PerfTimer();
    void allocate(int);
    void _roundToPower2(unsigned int);
    void _getIdleQueue(int);
    void allocateNodes(std::vector<PerfTimer::Node *, std::allocator<PerfTimer::Node *>> &, int);
    void rawRelease(PerfTimer::Node *, int);
    void push(char const*, char const*, int);
    void pop();
    void serialize(PerfTimer::Node const*);
    void releaseNodeChildren(PerfTimer::Node *, int);
    void _getMostSignificantBit(int);
    void _getStringId(char const*);
    void init(Core::Path const&);
    void startEventTimerForLog(std::string const&);
    void stopEventTimerForLog(std::string const&);
};
