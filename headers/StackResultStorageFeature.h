#pragma once

class StackResultStorageFeature {

public:

    void StackResultStorageFeature(WeakStorageFeature const&);
    void StackResultStorageFeature(StackResultStorageFeature&&);
    void _hasValue(void)const;
    void _getStackRef(void)const;
};
