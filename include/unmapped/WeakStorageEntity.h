#pragma once



class WeakStorageEntity {

public:
    ~WeakStorageEntity(); // _ZN17WeakStorageEntityD2Ev
//  WeakStorageEntity(WeakStorageEntity::EmptyInit); //TODO: incomplete function definition // _ZN17WeakStorageEntityC2ENS_9EmptyInitE
    WeakStorageEntity(OwnerStorageEntity const&); // _ZN17WeakStorageEntityC2ERK18OwnerStorageEntity
    WeakStorageEntity(StackResultStorageEntity const&); // _ZN17WeakStorageEntityC2ERK24StackResultStorageEntity
//  WeakStorageEntity(WeakStorageEntity::VariadicInit, EntityContext const&); //TODO: incomplete function definition // _ZN17WeakStorageEntityC2ENS_12VariadicInitERK13EntityContext
    void _reset(); // _ZN17WeakStorageEntity6_resetEv
    void _isSet()const; // _ZNK17WeakStorageEntity6_isSetEv
    void operator==(WeakStorageEntity const&)const; // _ZNK17WeakStorageEntityeqERKS_
    void operator!=(WeakStorageEntity const&)const; // _ZNK17WeakStorageEntityneERKS_
    void operator==(EntityContext const&)const; // _ZNK17WeakStorageEntityeqERK13EntityContext
    void operator!=(EntityContext const&)const; // _ZNK17WeakStorageEntityneERK13EntityContext
};
