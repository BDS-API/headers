#pragma once

#include <string>


class FeatureTypeFactory {

public:
    ~FeatureTypeFactory(); // _ZN18FeatureTypeFactoryD2Ev
    FeatureTypeFactory(); // _ZN18FeatureTypeFactoryC2Ev
    bool processFeature(IWorldRegistriesProvider &, std::string const&, Json::Value &)const; // _ZNK18FeatureTypeFactory14processFeatureER24IWorldRegistriesProviderRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN4Json5ValueE
};
