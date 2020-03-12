#pragma once



class ResourcePacksInfoData {

public:
    ResourcePacksInfoData();
    void getTexturePackSize()const;
    void getAddOnPackSize()const;
    ~ResourcePacksInfoData();
    std::string collectKeys()const;
};
