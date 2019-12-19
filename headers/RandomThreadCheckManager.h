#pragma once

class RandomThreadCheckManager : AppPlatformListener {

public:
    static long mInstance;

    virtual ~RandomThreadCheckManager();
    virtual void onAppResumed(void);

    void invalidateThreadIndex(void);
    void _tryCreateInstance(void);
    void RandomThreadCheckManager(void);
};
