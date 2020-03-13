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

//  PerfTimer(std::thread::id); //TODO: incomplete function definition // _ZN9PerfTimerC2ENSt6thread2idE
    ~PerfTimer(); // _ZN9PerfTimerD2Ev
    void allocate(int); // _ZN9PerfTimer8allocateEi
    void _roundToPower2(unsigned int); // _ZN9PerfTimer14_roundToPower2Ej
    void _getIdleQueue(int); // _ZN9PerfTimer13_getIdleQueueEi
    void allocateNodes(std::vector<PerfTimer::Node *> &, int); // _ZN9PerfTimer13allocateNodesERSt6vectorIPNS_4NodeESaIS2_EEi
    void rawRelease(PerfTimer::Node *, int); // _ZN9PerfTimer10rawReleaseEPNS_4NodeEi
    void push(char const*, char const*, int); // _ZN9PerfTimer4pushEPKcS1_i
    void pop(); // _ZN9PerfTimer3popEv
    void serialize(PerfTimer::Node const*); // _ZN9PerfTimer9serializeEPKNS_4NodeE
    void releaseNodeChildren(PerfTimer::Node *, int); // _ZN9PerfTimer19releaseNodeChildrenEPNS_4NodeEi
    void _getMostSignificantBit(int); // _ZN9PerfTimer22_getMostSignificantBitEi
    void _getStringId(char const*); // _ZN9PerfTimer12_getStringIdEPKc
    void init(Core::Path const&); // _ZN9PerfTimer4initERKN4Core4PathE
    void startEventTimerForLog(std::string const&); // _ZN9PerfTimer21startEventTimerForLogERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void stopEventTimerForLog(std::string const&); // _ZN9PerfTimer20stopEventTimerForLogERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    class Node {

    public:
        Node(char const*, char const*, int, double); // _ZN9PerfTimer4NodeC2EPKcS2_id
        Node(); // _ZN9PerfTimer4NodeC2Ev
    };
};
