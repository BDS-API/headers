#pragma once



class WeakStorageFeature {

public:

    WeakStorageFeature(WeakStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature::EmptyInit);
    WeakStorageFeature(OwnerStorageFeature const&);
    WeakStorageFeature(StackResultStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature::VariadicInit, FeatureRegistry &, unsigned long);
    WeakStorageFeature(WeakStorageFeature&&);
    void _reset();
    void _isSet()const;
};
