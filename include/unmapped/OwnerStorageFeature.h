#pragma once

#include "./OwnerStorageFeature.h"
#include "./FeatureRegistry.h"
#include "../bedrock/level/feature/IFeature.h"
#include <memory>


class OwnerStorageFeature {

public:

//  OwnerStorageFeature(OwnerStorageFeature::EmptyInit); //TODO: incomplete function definition
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &); //TODO: incomplete function definition
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &, std::unique_ptr<IFeature, std::default_delete<IFeature>>); //TODO: incomplete function definition
    OwnerStorageFeature(OwnerStorageFeature &&);
    void _reset();
    ~OwnerStorageFeature();
    void _hasValue()const;
    void _remake(FeatureRegistry &);
    void _remake(FeatureRegistry &, std::unique_ptr<IFeature, std::default_delete<IFeature>>);
    void _getStackRef()const;
};
