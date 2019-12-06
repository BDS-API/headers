#pragma once

class AppPlatform_linux : AppPlatform {

public:
    virtual ~AppPlatform_linux();
    virtual void queueForMainThread(std::function<void ()(void)>);
    virtual void getMainThreadQueue(void);
    virtual void getPlatformType(void)const;
    virtual void getFreeMemory(void)const;
    virtual void getMemoryLimit(void)const;
    virtual void getUsedMemory(void);
    virtual void getTotalPhysicalMemory(void)const;
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
    virtual bool canAppSelfTerminate(void)const;

    void AppPlatform_linux(void);
};
