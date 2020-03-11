#pragma once

#include "./EntityRegistryOwned.h"


namespace OwnerStorageEntity {

class EntityContextOwned {

public:

    void destroy();
    EntityContextOwned(EntityRegistryOwned &);
    void _ownedRegistry()const;
};

}