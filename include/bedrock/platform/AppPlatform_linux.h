#pragma once

#include "../../core/Path.h"
#include <functional>
#include "AppPlatform.h"


class AppPlatform_linux : AppPlatform {

public:
    virtual void getUsedMemory();
    virtual std::string getExternalStoragePath()const;
    virtual void getMainThreadQueue();
    virtual std::string getAssetFileFullPath(Core::Path const&);
    virtual std::string getCurrentStoragePath()const;
    virtual std::string getPlatformString()const;
    virtual void getMemoryLimit()const;
    virtual std::string getPackagePath()const;
    virtual std::string getPlatformTempPath()const;
    virtual std::string getInternalStoragePath()const;
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
    virtual std::string getUserdataPath()const;
    ~AppPlatform_linux();
    virtual std::string getApplicationId()const;
    virtual void getFreeMemory()const;
    virtual void queueForMainThread(std::function<void (void)>);
    virtual std::string getSubPlatformString()const;
    virtual void getPlatformType()const;
    virtual void getTotalPhysicalMemory()const;
    virtual bool canAppSelfTerminate()const;
    AppPlatform_linux();
};
