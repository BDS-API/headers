#pragma once



class StackResultStorageEntity {

public:
    void _hasValue()const;
//  StackResultStorageEntity(decltype(nullptr); //TODO: incomplete function definition
    StackResultStorageEntity(StackResultStorageEntity &&);
    void _getStackRef()const;
    StackResultStorageEntity(WeakStorageEntity const&);
    StackResultStorageEntity(EntityContext const&);
};
