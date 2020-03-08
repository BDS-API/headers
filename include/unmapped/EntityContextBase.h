#pragma once



class EntityContextBase {

public:

    EntityContextBase(EntityRegistryBase &, EntityId);
    EntityContextBase(EntityRegistryBase &, unsigned int);
    bool isValid(void)const;
    void _assertValid(void)const;
    void _registry(void)const;
    void _registry(void);
    void _getRawId(void)const;
};
