#pragma once



class WeakStorageFeature {

public:
    WeakStorageFeature(WeakStorageFeature const&); // _ZN18WeakStorageFeatureC2ERKS_
//  WeakStorageFeature(WeakStorageFeature::EmptyInit); //TODO: incomplete function definition // _ZN18WeakStorageFeatureC2ENS_9EmptyInitE
    WeakStorageFeature(OwnerStorageFeature const&); // _ZN18WeakStorageFeatureC2ERK19OwnerStorageFeature
    WeakStorageFeature(StackResultStorageFeature const&); // _ZN18WeakStorageFeatureC2ERK25StackResultStorageFeature
//  WeakStorageFeature(WeakStorageFeature::VariadicInit, FeatureRegistry &, unsigned long); //TODO: incomplete function definition // _ZN18WeakStorageFeatureC2ENS_12VariadicInitER15FeatureRegistrym
    WeakStorageFeature(WeakStorageFeature &&); // _ZN18WeakStorageFeatureC2EOS_
    void _reset(); // _ZN18WeakStorageFeature6_resetEv
    void _isSet()const; // _ZNK18WeakStorageFeature6_isSetEv
};
