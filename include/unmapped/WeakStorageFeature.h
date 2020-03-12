#pragma once

#include "StackResultStorageFeature.h"
#include "FeatureRegistry.h"
#include "OwnerStorageFeature.h"


class WeakStorageFeature {

public:
//  WeakStorageFeature(WeakStorageFeature::EmptyInit); //TODO: incomplete function definition
    WeakStorageFeature(WeakStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature &&);
    void _isSet()const;
    WeakStorageFeature(StackResultStorageFeature const&);
    WeakStorageFeature(OwnerStorageFeature const&);
    void _reset();
//  WeakStorageFeature(WeakStorageFeature::VariadicInit, FeatureRegistry &, unsigned long); //TODO: incomplete function definition
};
