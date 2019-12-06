#pragma once

class OwnerStorageEntity::EntityContextOwned {

public:

    void destroy(void);
    void EntityContextOwned(EntityRegistryOwned &);
    void _ownedRegistry(void)const;
};
