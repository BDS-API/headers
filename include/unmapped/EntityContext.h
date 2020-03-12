#pragma once

#include "EntityId.h"


class EntityContext {

public:
    void _registry()const;
    void operator==(EntityContext const&)const;
    EntityContext(EntityRegistry &, unsigned int);
    void getWeakRef()const;
    void operator!=(EntityContext const&)const;
    EntityContext(EntityRegistry &, EntityId);
};
