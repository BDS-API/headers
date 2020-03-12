#pragma once

#include "EntityId.h"
#include "EntityContextBase.h"


class EntityRegistryBase {

public:
    ~EntityRegistryBase();
    bool isValidEntity(EntityContextBase const&)const;
    void endView();
    void _assertValidRegistry(EntityContextBase const&)const;
//  EntityRegistryBase(entt::Registry<EntityId> &); //TODO: incomplete function definition
};
