#pragma once

class ResourcePackInfoData {

public:

    void ResourcePackInfoData(ResourcePackInfoData&&);
    void ResourcePackInfoData(ResourcePackInfoData const&);
    void ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::string const&, std::string const&, ContentIdentity const&, bool);
    void ResourcePackInfoData(void);
};
