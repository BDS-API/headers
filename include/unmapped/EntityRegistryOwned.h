#pragma once

#include "EntityContext.h"


class EntityRegistryOwned {

public:
    EntityRegistryOwned(); // _ZN19EntityRegistryOwnedC2Ev
    ~EntityRegistryOwned(); // _ZN19EntityRegistryOwnedD2Ev
    void createEntity(); // _ZN19EntityRegistryOwned12createEntityEv
    void destroyEntity(EntityContext); // _ZN19EntityRegistryOwned13destroyEntityE13EntityContext
};
