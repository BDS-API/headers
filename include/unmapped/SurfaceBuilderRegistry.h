#pragma once

#include "./EntityContext.h"


class SurfaceBuilderRegistry {

public:

    SurfaceBuilderRegistry();
    ~SurfaceBuilderRegistry();
    void lookupForEntity(EntityContext &)const;
};
