#pragma once



class WeakStorageEntity {

public:
//  WeakStorageEntity(WeakStorageEntity::VariadicInit, EntityContext const&); //TODO: incomplete function definition
    void _isSet()const;
//  WeakStorageEntity(WeakStorageEntity::EmptyInit); //TODO: incomplete function definition
    void operator!=(WeakStorageEntity const&)const;
    ~WeakStorageEntity();
    void operator==(WeakStorageEntity const&)const;
    void _reset();
    void operator==(EntityContext const&)const;
    WeakStorageEntity(StackResultStorageEntity const&);
    void operator!=(EntityContext const&)const;
    WeakStorageEntity(OwnerStorageEntity const&);
};
