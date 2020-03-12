#pragma once

#include "IWorldRegistriesProvider.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include <string>


class FeatureRegistry {

public:
    void getFeatureRegistrySize()const;
    void lookupByName(std::string const&)const;
    void cleanupFeatures();
    ~FeatureRegistry();
    void _reverseLookup(unsigned long)const;
    void reserveFeature(std::string const&);
    void _setupFeature(IWorldRegistriesProvider &, std::string const&, std::string const&);
    FeatureRegistry();
    void loadFromDefinitions(IWorldRegistriesProvider &, ResourcePackManager const&, bool);
    void lookupByNameDEPRECATED(std::string const&)const;
};
