#pragma once



class ScopedAutoreleasePool {

public:

    ScopedAutoreleasePool(void);
    void _create();
    void _drain();
    void drain();
    void drainNow();
    void reset();
};
