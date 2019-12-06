#pragma once

class StackResultStorageEntity {

public:

    void StackResultStorageEntity(decltype(nullptr));
    void StackResultStorageEntity(WeakStorageEntity const&);
    void StackResultStorageEntity(EntityContext const&);
    void StackResultStorageEntity(StackResultStorageEntity&&);
    void _hasValue(void)const;
    void _getStackRef(void)const;
};
