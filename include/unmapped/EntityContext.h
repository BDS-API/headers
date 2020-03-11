#pragma once

#include "./EntityContext.h"
#include "./EntityId.h"
#include "./EntityRegistry.h"


class EntityContext {

public:

    EntityContext(EntityRegistry &, EntityId);
    EntityContext(EntityRegistry &, unsigned int);
    void operator==(EntityContext const&)const;
    void operator!=(EntityContext const&)const;
    void getWeakRef()const;
    void _registry()const;
};
