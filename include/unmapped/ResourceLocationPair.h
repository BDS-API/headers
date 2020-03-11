#pragma once

#include "./PackIdVersion.h"
#include "./ResourceLocationPair.h"
#include "./ResourceLocation.h"


class ResourceLocationPair {

public:

    ~ResourceLocationPair();
    ResourceLocationPair(ResourceLocation const&, PackIdVersion const&, int);
    ResourceLocationPair(ResourceLocationPair const&);
};
