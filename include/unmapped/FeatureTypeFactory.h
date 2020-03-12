#pragma once

#include "IWorldRegistriesProvider.h"
#include <string>
#include "../json/Value.h"


class FeatureTypeFactory {

public:
    bool processFeature(IWorldRegistriesProvider &, std::string const&, Json::Value &)const;
    FeatureTypeFactory();
    ~FeatureTypeFactory();
};
