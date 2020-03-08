#pragma once

#include "../bedrock/pack/ResourcePackManager"


class FeatureRegistry {

public:

    FeatureRegistry(void);
    void loadFromDefinitions(IWorldRegistriesProvider &, ResourcePackManager const&, bool);
    void _reverseLookup(unsigned long)const;
    void _setupFeature(IWorldRegistriesProvider &, std::string const&, std::string const&);
    void reserveFeature(std::string const&);
    void lookupByName(std::string const&)const;
    void lookupByNameDEPRECATED(std::string const&)const;
    void cleanupFeatures();
    void getFeatureRegistrySize()const;
};
