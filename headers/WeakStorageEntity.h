#pragma once

class WeakStorageEntity {

public:

    void WeakStorageEntity(WeakStorageEntity::EmptyInit);
    void WeakStorageEntity(OwnerStorageEntity const&);
    void WeakStorageEntity(StackResultStorageEntity const&);
    void WeakStorageEntity(WeakStorageEntity::VariadicInit, EntityContext const&);
    void _reset(void);
    void _isSet(void)const;
};
