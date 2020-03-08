#pragma once

#include "../../core/Path"


class AppPlatform_linux : AppPlatform {

public:
    virtual AppPlatform_linux::~AppPlatform_linux()
    virtual void getPackagePath()const;
    virtual void getCurrentStoragePath()const;
    virtual void getExternalStoragePath()const;
    virtual void getInternalStoragePath()const;
    virtual void getUserdataPath()const;
    virtual void queueForMainThread(std::function<void ()(void)>);
    virtual void getMainThreadQueue();
    virtual void getAssetFileFullPath(Core::Path const&);
    virtual void getPlatformType()const;
    virtual void getPlatformString()const;
    virtual void getSubPlatformString()const;
    virtual void getApplicationId()const;
    virtual void getFreeMemory()const;
    virtual void getMemoryLimit()const;
    virtual void getUsedMemory();
    virtual void getTotalPhysicalMemory()const;
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
    virtual bool canAppSelfTerminate()const;
    virtual void getPlatformTempPath()const;

    AppPlatform_linux(void);
};
