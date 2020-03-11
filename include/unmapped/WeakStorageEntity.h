#pragma once

#include "./WeakStorageEntity.h"
#include "./EntityContext.h"
#include "./StackResultStorageEntity.h"
#include "./OwnerStorageEntity.h"


class WeakStorageEntity {

public:

    ~WeakStorageEntity();
//  WeakStorageEntity(WeakStorageEntity::EmptyInit); //TODO: incomplete function definition
    WeakStorageEntity(OwnerStorageEntity const&);
    WeakStorageEntity(StackResultStorageEntity const&);
//  WeakStorageEntity(WeakStorageEntity::VariadicInit, EntityContext const&); //TODO: incomplete function definition
    void _reset();
    void _isSet()const;
    void operator==(WeakStorageEntity const&)const;
    void operator!=(WeakStorageEntity const&)const;
    void operator==(EntityContext const&)const;
    void operator!=(EntityContext const&)const;
};
