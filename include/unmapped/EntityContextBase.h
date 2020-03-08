#pragma once



class EntityContextBase {

public:

    EntityContextBase(EntityRegistryBase &, EntityId);
    EntityContextBase(EntityRegistryBase &, unsigned int);
    bool isValid()const;
    void _assertValid()const;
    void _registry()const;
    void _registry();
    void _getRawId()const;
};
