#pragma once

#include "./EntityId.h"
#include "./EntityContextBase.h"


class EntityRegistryBase {

public:

//  EntityRegistryBase(entt::Registry<EntityId> &); //TODO: incomplete function definition
    bool isValidEntity(EntityContextBase const&)const;
    void _assertValidRegistry(EntityContextBase const&)const;
    void endView();
    ~EntityRegistryBase();
};
