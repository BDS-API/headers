#pragma once



class SpinLock {

public:
    void _try_lock(unsigned long);
    ~SpinLock();
    SpinLock();
    void _getThreadId();
    void unlock();
    void lock();
    void try_lock();
};
