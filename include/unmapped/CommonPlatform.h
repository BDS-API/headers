#pragma once



namespace BedrockEngine {

    class CommonPlatform {

    public:
        void getPlatformRuntimeInfo()const; // _ZNK13BedrockEngine14CommonPlatform22getPlatformRuntimeInfoEv
        void accessPlatformRuntimeInfo_Shim(); // _ZN13BedrockEngine14CommonPlatform30accessPlatformRuntimeInfo_ShimEv
        void getPlatformBuildInfo()const; // _ZNK13BedrockEngine14CommonPlatform20getPlatformBuildInfoEv
        void accessPlatformBuildInfo_Shim(); // _ZN13BedrockEngine14CommonPlatform28accessPlatformBuildInfo_ShimEv
    };
}
