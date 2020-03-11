#pragma once

#include <string>


class ResourcePacksInfoData {

public:

    ~ResourcePacksInfoData();
    std::string collectKeys()const;
    void getAddOnPackSize()const;
    void getTexturePackSize()const;
    ResourcePacksInfoData();
};
