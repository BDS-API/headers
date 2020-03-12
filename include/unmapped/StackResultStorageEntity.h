#pragma once

#include "WeakStorageEntity.h"
#include "EntityContext.h"


class StackResultStorageEntity {

public:
    StackResultStorageEntity(EntityContext const&);
//  StackResultStorageEntity(decltype(nullptr); //TODO: incomplete function definition
    StackResultStorageEntity(StackResultStorageEntity &&);
    StackResultStorageEntity(WeakStorageEntity const&);
    void _getStackRef()const;
    void _hasValue()const;
};
