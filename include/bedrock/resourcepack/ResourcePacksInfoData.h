#pragma once

#include <string>


class ResourcePacksInfoData {

public:
    ResourcePacksInfoData();
    std::string collectKeys()const;
    void getTexturePackSize()const;
    ~ResourcePacksInfoData();
    void getAddOnPackSize()const;
};
