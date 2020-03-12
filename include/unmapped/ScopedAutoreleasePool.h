#pragma once



class ScopedAutoreleasePool {

public:
    void reset();
    ~ScopedAutoreleasePool();
    void drain();
    void _drain();
    ScopedAutoreleasePool();
    void drainNow();
    void _create();
};
