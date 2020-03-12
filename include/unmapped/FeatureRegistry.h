#pragma once

#include <string>


class FeatureRegistry {

public:
    void lookupByName(std::string const&)const;
    FeatureRegistry();
    void lookupByNameDEPRECATED(std::string const&)const;
    void reserveFeature(std::string const&);
    void _reverseLookup(unsigned long)const;
    void loadFromDefinitions(IWorldRegistriesProvider &, ResourcePackManager const&, bool);
    void _setupFeature(IWorldRegistriesProvider &, std::string const&, std::string const&);
    ~FeatureRegistry();
    void cleanupFeatures();
    void getFeatureRegistrySize()const;
};
