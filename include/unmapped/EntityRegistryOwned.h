#pragma once

#include "EntityContext.h"


class EntityRegistryOwned {

public:
    void createEntity();
    ~EntityRegistryOwned();
    EntityRegistryOwned();
    void destroyEntity(EntityContext);
};
