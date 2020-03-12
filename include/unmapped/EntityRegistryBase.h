#pragma once



class EntityRegistryBase {

public:
    void _assertValidRegistry(EntityContextBase const&)const;
//  EntityRegistryBase(entt::Registry<EntityId> &); //TODO: incomplete function definition
    void endView();
    ~EntityRegistryBase();
    bool isValidEntity(EntityContextBase const&)const;
};
