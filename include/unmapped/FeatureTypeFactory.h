#pragma once

#include "../json/Value"


class FeatureTypeFactory {

public:

    FeatureTypeFactory(void);
    bool processFeature(IWorldRegistriesProvider &, std::string const&, Json::Value &)const;
};
