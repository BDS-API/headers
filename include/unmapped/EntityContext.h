#pragma once

#include "EntityId.h"


class EntityContext {

public:
    EntityContext(EntityRegistry &, EntityId); // _ZN13EntityContextC2ER14EntityRegistry8EntityId
    EntityContext(EntityRegistry &, unsigned int); // _ZN13EntityContextC2ER14EntityRegistryj
    void operator==(EntityContext const&)const; // _ZNK13EntityContexteqERKS_
    void operator!=(EntityContext const&)const; // _ZNK13EntityContextneERKS_
    void getWeakRef()const; // _ZNK13EntityContext10getWeakRefEv
    void _registry()const; // _ZNK13EntityContext9_registryEv
};
