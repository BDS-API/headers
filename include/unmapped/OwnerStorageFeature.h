#pragma once

class OwnerStorageFeature {

public:

    OwnerStorageFeature(OwnerStorageFeature::EmptyInit);
    OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &);
    OwnerStorageFeature(OwnerStorageFeature::VariadicInit, FeatureRegistry &, std::unique_ptr<IFeature, std::default_delete<IFeature>>);
    OwnerStorageFeature(OwnerStorageFeature&&);
    void _reset(void);
    void _hasValue(void)const;
    void _remake(FeatureRegistry &);
    void _remake(FeatureRegistry &, std::unique_ptr<IFeature, std::default_delete<IFeature>>);
    void _getStackRef(void)const;
};
