#pragma once



class SpinLock {

public:
    void _try_lock(unsigned long);
    void _getThreadId();
    SpinLock();
    void lock();
    void unlock();
    void try_lock();
    ~SpinLock();
};
