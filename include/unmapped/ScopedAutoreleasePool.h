#pragma once



class ScopedAutoreleasePool {

public:

    ScopedAutoreleasePool();
    void _create();
    ~ScopedAutoreleasePool();
    void _drain();
    void drain();
    void drainNow();
    void reset();
};
