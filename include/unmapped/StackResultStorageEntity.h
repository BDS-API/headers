#pragma once



class StackResultStorageEntity {

public:

    StackResultStorageEntity(decltype(nullptr));
    StackResultStorageEntity(WeakStorageEntity const&);
    StackResultStorageEntity(EntityContext const&);
    StackResultStorageEntity(StackResultStorageEntity&&);
    void _hasValue()const;
    void _getStackRef()const;
};
