#pragma once

class ScopedAutoreleasePool {

public:

    void ScopedAutoreleasePool(void);
    void _create(void);
    void _drain(void);
    void drain(void);
    void drainNow(void);
    void reset(void);
};
