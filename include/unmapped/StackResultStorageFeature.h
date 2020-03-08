#pragma once



class StackResultStorageFeature {

public:

    StackResultStorageFeature(WeakStorageFeature const&);
    StackResultStorageFeature(StackResultStorageFeature&&);
    void _hasValue(void)const;
    void _getStackRef(void)const;
};
