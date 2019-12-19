#pragma once

using namespace BedrockEngine;

class CommonPlatform {

public:

    void getPlatformRuntimeInfo(void)const;
    void accessPlatformRuntimeInfo_Shim(void);
    void getPlatformBuildInfo(void)const;
    void accessPlatformBuildInfo_Shim(void);
};
