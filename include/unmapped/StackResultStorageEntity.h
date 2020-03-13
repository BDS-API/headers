#pragma once



class StackResultStorageEntity {

public:
//  StackResultStorageEntity(decltype(nullptr); //TODO: incomplete function definition // _ZN24StackResultStorageEntityC2EDn
    StackResultStorageEntity(WeakStorageEntity const&); // _ZN24StackResultStorageEntityC2ERK17WeakStorageEntity
    StackResultStorageEntity(EntityContext const&); // _ZN24StackResultStorageEntityC2ERK13EntityContext
    StackResultStorageEntity(StackResultStorageEntity &&); // _ZN24StackResultStorageEntityC2EOS_
    void _hasValue()const; // _ZNK24StackResultStorageEntity9_hasValueEv
    void _getStackRef()const; // _ZNK24StackResultStorageEntity12_getStackRefEv
};
