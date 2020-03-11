#pragma once



namespace Core {

class SingleThreadedLock {

public:

    void lock();
    void unlock();
};

}