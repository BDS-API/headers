#pragma once

#include "./WeakStorageEntity.h"
#include "./EntityContext.h"
#include "./StackResultStorageEntity.h"


class StackResultStorageEntity {

public:

//  StackResultStorageEntity(decltype(nullptr); //TODO: incomplete function definition
    StackResultStorageEntity(WeakStorageEntity const&);
    StackResultStorageEntity(EntityContext const&);
    StackResultStorageEntity(StackResultStorageEntity &&);
    void _hasValue()const;
    void _getStackRef()const;
};
