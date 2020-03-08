#pragma once

#include "../bedrock/pack/ResourcePackManager"


class AutomaticFeatureRules {

public:

    void attachAutomaticFeatures(ResourcePackManager &, IWorldRegistriesProvider &, bool);
};
