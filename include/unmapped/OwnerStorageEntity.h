#pragma once



class OwnerStorageEntity {

public:
    class EntityContextOwned;

//  OwnerStorageEntity(OwnerStorageEntity::VariadicInit, EntityRegistryOwned &); //TODO: incomplete function definition
    void _getStackRef()const;
    void _remake(EntityRegistryOwned &);
    ~OwnerStorageEntity();
    void _hasValue()const;
//  OwnerStorageEntity(OwnerStorageEntity::EmptyInit); //TODO: incomplete function definition
    void _reset();
    OwnerStorageEntity(OwnerStorageEntity &&);
    class EntityContextOwned {

    public:
        void destroy();
        EntityContextOwned(EntityRegistryOwned &);
        void _ownedRegistry()const;
    };
};
