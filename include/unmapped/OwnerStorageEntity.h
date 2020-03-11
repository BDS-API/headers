#pragma once

#include "./EntityRegistryOwned.h"
#include "./OwnerStorageEntity.h"


class OwnerStorageEntity {

public:

//  OwnerStorageEntity(OwnerStorageEntity::EmptyInit); //TODO: incomplete function definition
//  OwnerStorageEntity(OwnerStorageEntity::VariadicInit, EntityRegistryOwned &); //TODO: incomplete function definition
    OwnerStorageEntity(OwnerStorageEntity &&);
    void _reset();
    void _hasValue()const;
    ~OwnerStorageEntity();
    void _remake(EntityRegistryOwned &);
    void _getStackRef()const;
};
