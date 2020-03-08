#pragma once



class SpinLock {

public:

    SpinLock(void);
    void try_lock();
    void _try_lock(unsigned long);
    void _getThreadId();
    void lock();
    void unlock();
};
