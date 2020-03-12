#pragma once



namespace BedrockEngine {

    class CommonPlatform {

    public:
        void getPlatformBuildInfo()const;
        void accessPlatformRuntimeInfo_Shim();
        void getPlatformRuntimeInfo()const;
        void accessPlatformBuildInfo_Shim();
    };
}
