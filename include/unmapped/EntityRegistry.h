#pragma once



class EntityRegistry {

public:

    EntityRegistry(entt::Registry<EntityId> &);
    void getWeakRef();
};
