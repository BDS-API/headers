#pragma once



using namespace Core;

class SingleThreadedLock {

public:

    void lock();
    void unlock();
};
