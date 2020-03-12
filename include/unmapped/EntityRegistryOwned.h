#pragma once

#include "EntityContext.h"


class EntityRegistryOwned {

public:
    void destroyEntity(EntityContext);
    ~EntityRegistryOwned();
    EntityRegistryOwned();
    void createEntity();
};
