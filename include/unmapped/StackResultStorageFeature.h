#pragma once



class StackResultStorageFeature {

public:
    void _getStackRef()const;
    StackResultStorageFeature(WeakStorageFeature const&);
    void _hasValue()const;
    StackResultStorageFeature(StackResultStorageFeature &&);
};
