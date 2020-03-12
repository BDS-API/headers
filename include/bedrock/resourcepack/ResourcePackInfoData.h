#pragma once

#include <string>
#include "../../unmapped/ContentIdentity.h"
#include "../../unmapped/SemVersion.h"
#include "../../mce/UUID.h"


class ResourcePackInfoData {

public:
    ResourcePackInfoData();
    ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::string const&, std::string const&, ContentIdentity const&, bool);
    ~ResourcePackInfoData();
    ResourcePackInfoData(ResourcePackInfoData &&);
    ResourcePackInfoData(ResourcePackInfoData const&);
};
