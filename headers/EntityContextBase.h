#pragma once

class EntityContextBase {

public:

    void EntityContextBase(EntityRegistryBase &, EntityId);
    void EntityContextBase(EntityRegistryBase &, unsigned int);
    bool isValid(void)const;
    void _assertValid(void)const;
    void _registry(void)const;
    void _registry(void);
    void _getRawId(void)const;
};
