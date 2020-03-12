#pragma once

#include "FeatureTypeFactory.h"
#include "FeatureRegistry.h"


namespace VanillaFeatures {

    void registerFeatures(FeatureRegistry &);
    void registerFeatureTypes(FeatureTypeFactory &);
};
