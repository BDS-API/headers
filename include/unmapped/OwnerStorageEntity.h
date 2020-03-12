#pragma once

#include "EntityRegistryOwned.h"


class OwnerStorageEntity {

public:
    class EntityContextOwned;

    void _reset();
//  OwnerStorageEntity(OwnerStorageEntity::VariadicInit, EntityRegistryOwned &); //TODO: incomplete function definition
//  OwnerStorageEntity(OwnerStorageEntity::EmptyInit); //TODO: incomplete function definition
    OwnerStorageEntity(OwnerStorageEntity &&);
    ~OwnerStorageEntity();
    void _hasValue()const;
    void _getStackRef()const;
    void _remake(EntityRegistryOwned &);
    class EntityContextOwned {

    public:
        void destroy();
        void _ownedRegistry()const;
        EntityContextOwned(EntityRegistryOwned &);
    };
};
