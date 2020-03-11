#pragma once

#include "./OwnerStorageFeature.h"
#include "./FeatureRegistry.h"
#include "./WeakStorageFeature.h"
#include "./StackResultStorageFeature.h"


class WeakStorageFeature {

public:

    WeakStorageFeature(WeakStorageFeature const&);
//  WeakStorageFeature(WeakStorageFeature::EmptyInit); //TODO: incomplete function definition
    WeakStorageFeature(OwnerStorageFeature const&);
    WeakStorageFeature(StackResultStorageFeature const&);
//  WeakStorageFeature(WeakStorageFeature::VariadicInit, FeatureRegistry &, unsigned long); //TODO: incomplete function definition
    WeakStorageFeature(WeakStorageFeature &&);
    void _reset();
    void _isSet()const;
};
