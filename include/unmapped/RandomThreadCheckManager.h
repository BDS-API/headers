#pragma once



class RandomThreadCheckManager : AppPlatformListener {

public:
    static long mInstance;

    virtual RandomThreadCheckManager::~RandomThreadCheckManager()
    virtual void onAppResumed();

    void invalidateThreadIndex();
    void _tryCreateInstance();
    RandomThreadCheckManager(void);
};
