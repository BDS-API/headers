#pragma once



namespace BedrockEngine {

    class CommonPlatform {

    public:
        void accessPlatformBuildInfo_Shim();
        void getPlatformBuildInfo()const;
        void accessPlatformRuntimeInfo_Shim();
        void getPlatformRuntimeInfo()const;
    };
}
