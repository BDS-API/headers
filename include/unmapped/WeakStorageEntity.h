#pragma once



class WeakStorageEntity {

public:

    WeakStorageEntity(WeakStorageEntity::EmptyInit);
    WeakStorageEntity(OwnerStorageEntity const&);
    WeakStorageEntity(StackResultStorageEntity const&);
    WeakStorageEntity(WeakStorageEntity::VariadicInit, EntityContext const&);
    void _reset();
    void _isSet()const;
};
