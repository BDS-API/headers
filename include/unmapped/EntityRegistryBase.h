#pragma once



class EntityRegistryBase {

public:
//  EntityRegistryBase(entt::Registry<EntityId> &); //TODO: incomplete function definition // _ZN18EntityRegistryBaseC2ERN4entt8RegistryI8EntityIdEE
    bool isValidEntity(EntityContextBase const&)const; // _ZNK18EntityRegistryBase13isValidEntityERK17EntityContextBase
    void _assertValidRegistry(EntityContextBase const&)const; // _ZNK18EntityRegistryBase20_assertValidRegistryERK17EntityContextBase
    void endView(); // _ZN18EntityRegistryBase7endViewEv
    ~EntityRegistryBase(); // _ZN18EntityRegistryBaseD2Ev
};
