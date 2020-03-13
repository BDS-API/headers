#pragma once



class ScopedAutoreleasePool {

public:
    ScopedAutoreleasePool(); // _ZN21ScopedAutoreleasePoolC2Ev
    void _create(); // _ZN21ScopedAutoreleasePool7_createEv
    ~ScopedAutoreleasePool(); // _ZN21ScopedAutoreleasePoolD2Ev
    void _drain(); // _ZN21ScopedAutoreleasePool6_drainEv
    void drain(); // _ZN21ScopedAutoreleasePool5drainEv
    void drainNow(); // _ZN21ScopedAutoreleasePool8drainNowEv
    void reset(); // _ZN21ScopedAutoreleasePool5resetEv
};
