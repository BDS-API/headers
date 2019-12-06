#pragma once

class OwnerStorageEntity {

public:

    void OwnerStorageEntity(OwnerStorageEntity::EmptyInit);
    void OwnerStorageEntity(OwnerStorageEntity::VariadicInit, EntityRegistryOwned &);
    void OwnerStorageEntity(OwnerStorageEntity&&);
    void _reset(void);
    void _hasValue(void)const;
    void _remake(EntityRegistryOwned &);
    void _getStackRef(void)const;
};
