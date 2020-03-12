#pragma once

#include "EntityId.h"
#include "EntityRegistry.h"


class EntityContext {

public:
    EntityContext(EntityRegistry &, unsigned int);
    void operator!=(EntityContext const&)const;
    EntityContext(EntityRegistry &, EntityId);
    void _registry()const;
    void operator==(EntityContext const&)const;
    void getWeakRef()const;
};
