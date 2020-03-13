#pragma once

#include <memory>


class OwnerStorageFeature {

public:
//  OwnerStorageFeature(OwnerStorageFeature::EmptyInit); //TODO: incomplete function definition // _ZN19OwnerStorageFeatureC2ENS_9EmptyInitE
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &); //TODO: incomplete function definition // _ZN19OwnerStorageFeatureC2ENS_12VariadicInitER15FeatureRegistry
//  OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &, std::unique_ptr<IFeature>); //TODO: incomplete function definition // _ZN19OwnerStorageFeatureC2ENS_12VariadicInitER15FeatureRegistrySt10unique_ptrI8IFeatureSt14default_deleteIS4_EE
    OwnerStorageFeature(OwnerStorageFeature &&); // _ZN19OwnerStorageFeatureC2EOS_
    void _reset(); // _ZN19OwnerStorageFeature6_resetEv
    ~OwnerStorageFeature(); // _ZN19OwnerStorageFeatureD2Ev
    void _hasValue()const; // _ZNK19OwnerStorageFeature9_hasValueEv
    void _remake(FeatureRegistry &); // _ZN19OwnerStorageFeature7_remakeER15FeatureRegistry
    void _remake(FeatureRegistry &, std::unique_ptr<IFeature>); // _ZN19OwnerStorageFeature7_remakeER15FeatureRegistrySt10unique_ptrI8IFeatureSt14default_deleteIS3_EE
    void _getStackRef()const; // _ZNK19OwnerStorageFeature12_getStackRefEv
};
