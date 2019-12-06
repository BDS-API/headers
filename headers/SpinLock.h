#pragma once

class SpinLock {

public:

    void SpinLock(void);
    void try_lock(void);
    void _try_lock(unsigned long);
    void _getThreadId(void);
    void lock(void);
    void unlock(void);
};
