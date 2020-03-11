#pragma once

#include "./FeatureRegistry.h"
#include "./FeatureTypeFactory.h"


class VanillaFeatures {

public:

    void registerFeatureTypes(FeatureTypeFactory &);
    void registerFeatures(FeatureRegistry &);
};
