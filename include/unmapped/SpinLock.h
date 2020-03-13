#pragma once



class SpinLock {

public:
    SpinLock(); // _ZN8SpinLockC2Ev
    ~SpinLock(); // _ZN8SpinLockD2Ev
    void try_lock(); // _ZN8SpinLock8try_lockEv
    void _try_lock(unsigned long); // _ZN8SpinLock9_try_lockEm
    void _getThreadId(); // _ZN8SpinLock12_getThreadIdEv
    void lock(); // _ZN8SpinLock4lockEv
    void unlock(); // _ZN8SpinLock6unlockEv
};
