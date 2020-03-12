#pragma once

#include <string>


class ResourcePackInfoData {

public:
    ResourcePackInfoData(ResourcePackInfoData const&);
    ~ResourcePackInfoData();
    ResourcePackInfoData();
    ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::string const&, std::string const&, ContentIdentity const&, bool);
    ResourcePackInfoData(ResourcePackInfoData &&);
};
