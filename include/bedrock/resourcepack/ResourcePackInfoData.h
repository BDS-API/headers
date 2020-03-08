#pragma once

#include "../../mce/UUID"
#include "../../unmapped/ContentIdentity"
#include "../../unmapped/SemVersion"


class ResourcePackInfoData {

public:

    ResourcePackInfoData(ResourcePackInfoData&&);
    ResourcePackInfoData(ResourcePackInfoData const&);
    ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::string const&, std::string const&, ContentIdentity const&, bool);
    ResourcePackInfoData(void);
};
