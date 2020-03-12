#pragma once

#include "AppPlatform.h"
#include <string>
#include <functional>


class AppPlatform_linux : AppPlatform {

public:
    virtual void getUsedMemory();
    virtual void getPlatformType()const;
    virtual void getFreeMemory()const;
    ~AppPlatform_linux();
    virtual void getTotalPhysicalMemory()const;
    virtual std::string getApplicationId()const;
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
    virtual std::string getAssetFileFullPath(Core::Path const&);
    virtual std::string getPlatformString()const;
    virtual std::string getPlatformTempPath()const;
    virtual std::string getPackagePath()const;
    virtual void queueForMainThread(std::function<void (void)>);
    virtual std::string getUserdataPath()const;
    virtual std::string getInternalStoragePath()const;
    virtual bool canAppSelfTerminate()const;
    virtual void getMemoryLimit()const;
    virtual std::string getExternalStoragePath()const;
    virtual std::string getCurrentStoragePath()const;
    virtual std::string getSubPlatformString()const;
    virtual void getMainThreadQueue();
    AppPlatform_linux();
};
