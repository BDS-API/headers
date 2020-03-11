#pragma once

#include <string>
#include <functional>
#include "./AppPlatform.h"
#include "../../core/Path.h"


class AppPlatform_linux : AppPlatform {

public:
    virtual ~AppPlatform_linux();
    virtual std::string getPackagePath()const;
    virtual std::string getCurrentStoragePath()const;
    virtual std::string getExternalStoragePath()const;
    virtual std::string getInternalStoragePath()const;
    virtual std::string getUserdataPath()const;
//  virtual void queueForMainThread(std::function<void (void)>); //TODO: incomplete function definition
    virtual void getMainThreadQueue();
    virtual std::string getAssetFileFullPath(Core::Path const&);
    virtual void getPlatformType()const;
    virtual std::string getPlatformString()const;
    virtual std::string getSubPlatformString()const;
    virtual std::string getApplicationId()const;
    virtual void getFreeMemory()const;
    virtual void getMemoryLimit()const;
    virtual void getUsedMemory();
    virtual void getTotalPhysicalMemory()const;
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
    virtual bool canAppSelfTerminate()const;
    virtual std::string getPlatformTempPath()const;

    AppPlatform_linux();
};
