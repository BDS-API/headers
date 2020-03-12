#pragma once



class WeakStorageFeature {

public:
    WeakStorageFeature(WeakStorageFeature const&);
    void _reset();
    WeakStorageFeature(OwnerStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature &&);
//  WeakStorageFeature(WeakStorageFeature::EmptyInit); //TODO: incomplete function definition
//  WeakStorageFeature(WeakStorageFeature::VariadicInit, FeatureRegistry &, unsigned long); //TODO: incomplete function definition
    void _isSet()const;
    WeakStorageFeature(StackResultStorageFeature const&);
};
