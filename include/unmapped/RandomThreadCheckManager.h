#pragma once

#include "AppPlatformListener.h"


class RandomThreadCheckManager : AppPlatformListener {

public:
    static long mInstance;

    ~RandomThreadCheckManager(); // _ZN24RandomThreadCheckManagerD2Ev
    virtual void onAppResumed(); // _ZN24RandomThreadCheckManager12onAppResumedEv
    void invalidateThreadIndex(); // _ZN24RandomThreadCheckManager21invalidateThreadIndexEv
    void _tryCreateInstance(); // _ZN24RandomThreadCheckManager18_tryCreateInstanceEv
    RandomThreadCheckManager(); // _ZN24RandomThreadCheckManagerC2Ev
};
