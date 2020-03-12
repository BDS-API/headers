#pragma once

#include "EntityId.h"


class EntityContextBase {

public:
    EntityContextBase(EntityRegistryBase &, EntityId);
    void _assertValid()const;
    void _registry();
    bool isValid()const;
    void operator!=(EntityContextBase const&)const;
    void _registry()const;
    void _getRawId()const;
    void operator==(EntityContextBase const&)const;
    EntityContextBase(EntityRegistryBase &, unsigned int);
};
