#pragma once

#include <memory>


class OwnerStorageFeature {

public:
//  OwnerStorageFeature(OwnerStorageFeature::EmptyInit); //TODO: incomplete function definition
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &); //TODO: incomplete function definition
    void _hasValue()const;
    void _remake(FeatureRegistry &);
    ~OwnerStorageFeature();
    void _reset();
    OwnerStorageFeature(OwnerStorageFeature &&);
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &, std::unique_ptr<IFeature>); //TODO: incomplete function definition
    void _remake(FeatureRegistry &, std::unique_ptr<IFeature>);
    void _getStackRef()const;
};
