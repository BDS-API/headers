#pragma once

#include "EntityId.h"


class EntityContextBase {

public:
    EntityContextBase(EntityRegistryBase &, EntityId); // _ZN17EntityContextBaseC2ER18EntityRegistryBase8EntityId
    EntityContextBase(EntityRegistryBase &, unsigned int); // _ZN17EntityContextBaseC2ER18EntityRegistryBasej
    void operator==(EntityContextBase const&)const; // _ZNK17EntityContextBaseeqERKS_
    void operator!=(EntityContextBase const&)const; // _ZNK17EntityContextBaseneERKS_
    bool isValid()const; // _ZNK17EntityContextBase7isValidEv
    void _assertValid()const; // _ZNK17EntityContextBase12_assertValidEv
    void _registry()const; // _ZNK17EntityContextBase9_registryEv
    void _registry(); // _ZN17EntityContextBase9_registryEv
    void _getRawId()const; // _ZNK17EntityContextBase9_getRawIdEv
};
