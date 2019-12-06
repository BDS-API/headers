#pragma once

class EntityRegistryBase {

public:

    void EntityRegistryBase(entt::Registry<EntityId> &);
    bool isValidEntity(EntityContextBase const&)const;
    void _assertValidRegistry(EntityContextBase const&)const;
    void endView(void);
};
