#pragma once



class EntityRegistryBase {

public:

    EntityRegistryBase(entt::Registry<EntityId> &);
    bool isValidEntity(EntityContextBase const&)const;
    void _assertValidRegistry(EntityContextBase const&)const;
    void endView();
};
