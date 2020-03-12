#pragma once

#include "../core/Path.h"
#include <vector>
#include <string>


class PerfTimer {

public:
    class Node;

    static long MultiplyDeBruijnBitPosition;
    static std::string mPath;
    static long test;
    static long mEnabled;

    void _roundToPower2(unsigned int);
    void _getStringId(char const*);
    void rawRelease(PerfTimer::Node *, int);
    void push(char const*, char const*, int);
    void init(Core::Path const&);
    void stopEventTimerForLog(std::string const&);
    void allocateNodes(std::vector<PerfTimer::Node *> &, int);
    ~PerfTimer();
    void releaseNodeChildren(PerfTimer::Node *, int);
    void startEventTimerForLog(std::string const&);
    void _getIdleQueue(int);
    void pop();
    void allocate(int);
    void _getMostSignificantBit(int);
    void serialize(PerfTimer::Node const*);
//  PerfTimer(std::thread::id); //TODO: incomplete function definition
    class Node {

    public:
        Node();
        Node(char const*, char const*, int, double);
    };
};
