#pragma once

#include <string>


class FeatureRegistry {

public:
    FeatureRegistry(); // _ZN15FeatureRegistryC2Ev
    ~FeatureRegistry(); // _ZN15FeatureRegistryD2Ev
    void loadFromDefinitions(IWorldRegistriesProvider &, ResourcePackManager const&, bool); // _ZN15FeatureRegistry19loadFromDefinitionsER24IWorldRegistriesProviderRK19ResourcePackManagerb
    void _reverseLookup(unsigned long)const; // _ZNK15FeatureRegistry14_reverseLookupEm
    void _setupFeature(IWorldRegistriesProvider &, std::string const&, std::string const&); // _ZN15FeatureRegistry13_setupFeatureER24IWorldRegistriesProviderRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_
    void reserveFeature(std::string const&); // _ZN15FeatureRegistry14reserveFeatureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void lookupByName(std::string const&)const; // _ZNK15FeatureRegistry12lookupByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void lookupByNameDEPRECATED(std::string const&)const; // _ZNK15FeatureRegistry22lookupByNameDEPRECATEDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void cleanupFeatures(); // _ZN15FeatureRegistry15cleanupFeaturesEv
    void getFeatureRegistrySize()const; // _ZNK15FeatureRegistry22getFeatureRegistrySizeEv
};
