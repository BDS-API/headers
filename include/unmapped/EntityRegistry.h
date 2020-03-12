#pragma once

#include "EntityId.h"


class EntityRegistry {

public:
    ~EntityRegistry();
    void getWeakRef();
//  EntityRegistry(entt::Registry<EntityId> &); //TODO: incomplete function definition
};
