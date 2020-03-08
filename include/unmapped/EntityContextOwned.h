#pragma once



using namespace OwnerStorageEntity;

class EntityContextOwned {

public:

    void destroy(void);
    EntityContextOwned(EntityRegistryOwned &);
    void _ownedRegistry(void)const;
};
