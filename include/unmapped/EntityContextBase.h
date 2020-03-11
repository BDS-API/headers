#pragma once

#include "./EntityRegistryBase.h"
#include "./EntityId.h"
#include "./EntityContextBase.h"


class EntityContextBase {

public:

    EntityContextBase(EntityRegistryBase &, EntityId);
    EntityContextBase(EntityRegistryBase &, unsigned int);
    void operator==(EntityContextBase const&)const;
    void operator!=(EntityContextBase const&)const;
    bool isValid()const;
    void _assertValid()const;
    void _registry()const;
    void _registry();
    void _getRawId()const;
};
