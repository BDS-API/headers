#pragma once

#include "AppPlatformListener.h"


class RandomThreadCheckManager : AppPlatformListener {

public:
    static long mInstance;

    ~RandomThreadCheckManager();
    virtual void onAppResumed();
    void invalidateThreadIndex();
    void _tryCreateInstance();
    RandomThreadCheckManager();
};
