#pragma once

#include "AppPlatformListener.h"


class RandomThreadCheckManager : public AppPlatformListener {

public:
    static long mInstance;

    virtual ~RandomThreadCheckManager(); // _ZN24RandomThreadCheckManagerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onAppResumed(); // _ZN24RandomThreadCheckManager12onAppResumedEv
    void invalidateThreadIndex(); // _ZN24RandomThreadCheckManager21invalidateThreadIndexEv
    void _tryCreateInstance(); // _ZN24RandomThreadCheckManager18_tryCreateInstanceEv
    RandomThreadCheckManager(); // _ZN24RandomThreadCheckManagerC2Ev
};
