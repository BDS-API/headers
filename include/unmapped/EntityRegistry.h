#pragma once

#include "./EntityId.h"


class EntityRegistry {

public:

    ~EntityRegistry();
//  EntityRegistry(entt::Registry<EntityId> &); //TODO: incomplete function definition
    void getWeakRef();
};
