#pragma once

#include <string>
#include <functional>
#include "AppPlatform.h"


class AppPlatform_linux : AppPlatform {

public:
    ~AppPlatform_linux(); // _ZN17AppPlatform_linuxD2Ev
    virtual std::string getPackagePath()const; // _ZNK17AppPlatform_linux14getPackagePathB5cxx11Ev
    virtual std::string getCurrentStoragePath()const; // _ZNK17AppPlatform_linux21getCurrentStoragePathB5cxx11Ev
    virtual std::string getExternalStoragePath()const; // _ZNK17AppPlatform_linux22getExternalStoragePathB5cxx11Ev
    virtual std::string getInternalStoragePath()const; // _ZNK17AppPlatform_linux22getInternalStoragePathB5cxx11Ev
    virtual std::string getUserdataPath()const; // _ZNK17AppPlatform_linux15getUserdataPathB5cxx11Ev
    virtual void queueForMainThread(std::function<void (void)>); // _ZN17AppPlatform_linux18queueForMainThreadESt8functionIFvvEE
    virtual void getMainThreadQueue(); // _ZN17AppPlatform_linux18getMainThreadQueueEv
    virtual std::string getAssetFileFullPath(Core::Path const&); // _ZN17AppPlatform_linux20getAssetFileFullPathB5cxx11ERKN4Core4PathE
    virtual void getPlatformType()const; // _ZNK17AppPlatform_linux15getPlatformTypeEv
    virtual std::string getPlatformString()const; // _ZNK17AppPlatform_linux17getPlatformStringB5cxx11Ev
    virtual std::string getSubPlatformString()const; // _ZNK17AppPlatform_linux20getSubPlatformStringB5cxx11Ev
    virtual std::string getApplicationId()const; // _ZNK17AppPlatform_linux16getApplicationIdB5cxx11Ev
    virtual void getFreeMemory()const; // _ZNK17AppPlatform_linux13getFreeMemoryEv
    virtual void getMemoryLimit()const; // _ZNK17AppPlatform_linux14getMemoryLimitEv
    virtual void getUsedMemory(); // _ZN17AppPlatform_linux13getUsedMemoryEv
    virtual void getTotalPhysicalMemory()const; // _ZNK17AppPlatform_linux22getTotalPhysicalMemoryEv
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&); // _ZN17AppPlatform_linux31calculateAvailableDiskFreeSpaceERKN4Core4PathE
    virtual bool canAppSelfTerminate()const; // _ZNK17AppPlatform_linux19canAppSelfTerminateEv
    virtual std::string getPlatformTempPath()const; // _ZNK17AppPlatform_linux19getPlatformTempPathB5cxx11Ev
    AppPlatform_linux(); // _ZN17AppPlatform_linuxC2Ev
};
