#pragma once

#include "IWorldRegistriesProvider.h"
#include "../bedrock/pack/ResourcePackManager.h"


namespace AutomaticFeatureRules {

    void attachAutomaticFeatures(ResourcePackManager &, IWorldRegistriesProvider &, bool);
};
