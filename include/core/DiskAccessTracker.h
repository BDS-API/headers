#pragma once



using namespace Core;

class DiskAccessTracker {

public:

    DiskAccessTracker(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void getDiskAccessTracker();
    void trackWriteOperation(Core::Path const&);
    void _ignoreWrite(Core::Path const&)const;
    void _addNewWriteOperation(unsigned long);
    void trackWriteAmount(Core::Path const&, unsigned long);
    void getAverageBytesWrittenPerSecond()const;
    void getAverageNumberOfWritesPerSecond()const;
    void addIgnoredPath(Core::Path const&);
    void removeIgnoredPath(Core::Path const&);
    void update();
};
