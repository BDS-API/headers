#pragma once



class ScopedAutoreleasePool {

public:
    void reset();
    void _create();
    ~ScopedAutoreleasePool();
    void drainNow();
    void _drain();
    void drain();
    ScopedAutoreleasePool();
};
