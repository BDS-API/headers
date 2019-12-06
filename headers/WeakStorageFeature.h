#pragma once

class WeakStorageFeature {

public:

    void WeakStorageFeature(WeakStorageFeature const&);
    void WeakStorageFeature(WeakStorageFeature::EmptyInit);
    void WeakStorageFeature(OwnerStorageFeature const&);
    void WeakStorageFeature(StackResultStorageFeature const&);
    void WeakStorageFeature(WeakStorageFeature::VariadicInit, FeatureRegistry &, unsigned long);
    void WeakStorageFeature(WeakStorageFeature&&);
    void _reset(void);
    void _isSet(void)const;
};
