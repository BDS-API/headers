#pragma once



namespace BedrockEngine {

class CommonPlatform {

public:

    void getPlatformRuntimeInfo()const;
    void accessPlatformRuntimeInfo_Shim();
    void getPlatformBuildInfo()const;
    void accessPlatformBuildInfo_Shim();
};

}