#pragma once

class OwnerStorageFeature {

public:

    void OwnerStorageFeature(OwnerStorageFeature::EmptyInit);
    void OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &);
    void OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &, std::unique_ptr<IFeature, std::default_delete<IFeature>>);
    void OwnerStorageFeature(OwnerStorageFeature&&);
    void _reset(void);
    void _hasValue(void)const;
    void _remake(FeatureRegistry &);
    void _remake(FeatureRegistry &, std::unique_ptr<IFeature, std::default_delete<IFeature>>);
    void _getStackRef(void)const;
};
