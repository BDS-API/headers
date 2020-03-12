#pragma once

#include "OwnerStorageEntity.h"
#include "StackResultStorageEntity.h"
#include "EntityContext.h"


class WeakStorageEntity {

public:
    void operator==(WeakStorageEntity const&)const;
    void operator!=(EntityContext const&)const;
    void _reset();
    void _isSet()const;
    WeakStorageEntity(StackResultStorageEntity const&);
//  WeakStorageEntity(WeakStorageEntity::VariadicInit, EntityContext const&); //TODO: incomplete function definition
    void operator==(EntityContext const&)const;
//  WeakStorageEntity(WeakStorageEntity::EmptyInit); //TODO: incomplete function definition
    void operator!=(WeakStorageEntity const&)const;
    ~WeakStorageEntity();
    WeakStorageEntity(OwnerStorageEntity const&);
};
