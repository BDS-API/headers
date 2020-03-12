#pragma once

#include "ResourceLocation.h"
#include "PackIdVersion.h"


class ResourceLocationPair {

public:
    ~ResourceLocationPair();
    ResourceLocationPair(ResourceLocation const&, PackIdVersion const&, int);
    ResourceLocationPair(ResourceLocationPair const&);
};
