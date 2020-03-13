#pragma once

#include <string>


class ResourcePacksInfoData {

public:
    ~ResourcePacksInfoData(); // _ZN21ResourcePacksInfoDataD2Ev
    std::string collectKeys()const; // _ZNK21ResourcePacksInfoData11collectKeysB5cxx11Ev
    void getAddOnPackSize()const; // _ZNK21ResourcePacksInfoData16getAddOnPackSizeEv
    void getTexturePackSize()const; // _ZNK21ResourcePacksInfoData18getTexturePackSizeEv
    ResourcePacksInfoData(); // _ZN21ResourcePacksInfoDataC2Ev
};
