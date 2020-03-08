#pragma once



class OwnerStorageEntity {

public:

    OwnerStorageEntity(OwnerStorageEntity::EmptyInit);
    OwnerStorageEntity(OwnerStorageEntity::VariadicInit, EntityRegistryOwned &);
    OwnerStorageEntity(OwnerStorageEntity&&);
    void _reset();
    void _hasValue()const;
    void _remake(EntityRegistryOwned &);
    void _getStackRef()const;
};
