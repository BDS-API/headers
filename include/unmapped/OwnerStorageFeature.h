#pragma once

#include "../bedrock/level/feature/IFeature.h"
#include "FeatureRegistry.h"
#include <memory>


class OwnerStorageFeature {

public:
    OwnerStorageFeature(OwnerStorageFeature &&);
//  OwnerStorageFeature(OwnerStorageFeature::EmptyInit); //TODO: incomplete function definition
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &); //TODO: incomplete function definition
    void _remake(FeatureRegistry &, std::unique_ptr<IFeature>);
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &, std::unique_ptr<IFeature>); //TODO: incomplete function definition
    void _remake(FeatureRegistry &);
    ~OwnerStorageFeature();
    void _reset();
    void _hasValue()const;
    void _getStackRef()const;
};
