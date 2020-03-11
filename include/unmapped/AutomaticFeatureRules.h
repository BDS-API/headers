#pragma once

#include "./IWorldRegistriesProvider.h"
#include "../bedrock/pack/ResourcePackManager.h"


class AutomaticFeatureRules {

public:

    void attachAutomaticFeatures(ResourcePackManager &, IWorldRegistriesProvider &, bool);
};
