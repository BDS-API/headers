#pragma once

class AppPlatform_linux : AppPlatform {

public:
    virtual ~AppPlatform_linux();
    virtual void getPackagePath[abi:cxx11](void)const;
    virtual void getCurrentStoragePath[abi:cxx11](void)const;
    virtual void getExternalStoragePath[abi:cxx11](void)const;
    virtual void getInternalStoragePath[abi:cxx11](void)const;
    virtual void getUserdataPath[abi:cxx11](void)const;
    virtual void queueForMainThread(std::function<void ()(void)>);
    virtual void getMainThreadQueue(void);
    virtual void getAssetFileFullPath[abi:cxx11](Core::Path const&);
    virtual void getPlatformType(void)const;
    virtual void getPlatformString[abi:cxx11](void)const;
    virtual void getSubPlatformString[abi:cxx11](void)const;
    virtual void getApplicationId[abi:cxx11](void)const;
    virtual void getFreeMemory(void)const;
    virtual void getMemoryLimit(void)const;
    virtual void getUsedMemory(void);
    virtual void getTotalPhysicalMemory(void)const;
    virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
    virtual bool canAppSelfTerminate(void)const;
    virtual void getPlatformTempPath[abi:cxx11](void)const;

    void AppPlatform_linux(void);
};
