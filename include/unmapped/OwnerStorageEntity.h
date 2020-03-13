#pragma once



class OwnerStorageEntity {

public:
    class EntityContextOwned;

//  OwnerStorageEntity(OwnerStorageEntity::EmptyInit); //TODO: incomplete function definition // _ZN18OwnerStorageEntityC2ENS_9EmptyInitE
//  OwnerStorageEntity(OwnerStorageEntity::VariadicInit, EntityRegistryOwned &); //TODO: incomplete function definition // _ZN18OwnerStorageEntityC2ENS_12VariadicInitER19EntityRegistryOwned
    OwnerStorageEntity(OwnerStorageEntity &&); // _ZN18OwnerStorageEntityC2EOS_
    void _reset(); // _ZN18OwnerStorageEntity6_resetEv
    void _hasValue()const; // _ZNK18OwnerStorageEntity9_hasValueEv
    ~OwnerStorageEntity(); // _ZN18OwnerStorageEntityD2Ev
    void _remake(EntityRegistryOwned &); // _ZN18OwnerStorageEntity7_remakeER19EntityRegistryOwned
    void _getStackRef()const; // _ZNK18OwnerStorageEntity12_getStackRefEv
    class EntityContextOwned {

    public:
        void destroy(); // _ZN18OwnerStorageEntity18EntityContextOwned7destroyEv
        EntityContextOwned(EntityRegistryOwned &); // _ZN18OwnerStorageEntity18EntityContextOwnedC2ER19EntityRegistryOwned
        void _ownedRegistry()const; // _ZNK18OwnerStorageEntity18EntityContextOwned14_ownedRegistryEv
    };
};
