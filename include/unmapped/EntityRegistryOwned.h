#pragma once

#include "./EntityContext.h"


class EntityRegistryOwned {

public:

    EntityRegistryOwned();
    ~EntityRegistryOwned();
    void createEntity();
    void destroyEntity(EntityContext);
};
