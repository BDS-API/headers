#pragma once



using namespace OwnerStorageEntity;

class EntityContextOwned {

public:

    void destroy();
    EntityContextOwned(EntityRegistryOwned &);
    void _ownedRegistry()const;
};
