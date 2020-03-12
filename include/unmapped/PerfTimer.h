#pragma once

#include <string>
#include <vector>


class PerfTimer {

public:
    class Node;

    static long MultiplyDeBruijnBitPosition;
    static std::string mPath;
    static long test;
    static long mEnabled;

    void _getIdleQueue(int);
    ~PerfTimer();
    void serialize(PerfTimer::Node const*);
    void releaseNodeChildren(PerfTimer::Node *, int);
    void allocateNodes(std::vector<PerfTimer::Node *> &, int);
    void push(char const*, char const*, int);
    void pop();
    void _getStringId(char const*);
    void _getMostSignificantBit(int);
    void init(Core::Path const&);
    void stopEventTimerForLog(std::string const&);
    void rawRelease(PerfTimer::Node *, int);
    void allocate(int);
    void _roundToPower2(unsigned int);
    void startEventTimerForLog(std::string const&);
//  PerfTimer(std::thread::id); //TODO: incomplete function definition
    class Node {

    public:
        Node(char const*, char const*, int, double);
        Node();
    };
};
