#pragma once

#include "./FeatureToggle.h"


namespace FeatureToggles {

class FeatureToggle {

public:

    ~FeatureToggle();
    FeatureToggle(FeatureToggles::FeatureToggle &&);
};

}