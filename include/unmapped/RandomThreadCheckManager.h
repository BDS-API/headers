#pragma once

#include "AppPlatformListener.h"


class RandomThreadCheckManager : AppPlatformListener {

public:
    static long mInstance;

    virtual void onAppResumed();
    ~RandomThreadCheckManager();
    void invalidateThreadIndex();
    RandomThreadCheckManager();
    void _tryCreateInstance();
};
