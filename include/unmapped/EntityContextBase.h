#pragma once

#include "EntityId.h"
#include "EntityRegistryBase.h"


class EntityContextBase {

public:
    EntityContextBase(EntityRegistryBase &, EntityId);
    void operator==(EntityContextBase const&)const;
    bool isValid()const;
    void _getRawId()const;
    void _registry();
    void _registry()const;
    void _assertValid()const;
    void operator!=(EntityContextBase const&)const;
    EntityContextBase(EntityRegistryBase &, unsigned int);
};
