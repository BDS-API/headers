#pragma once

#include <string>


class FeatureTypeFactory {

public:
    FeatureTypeFactory();
    ~FeatureTypeFactory();
    bool processFeature(IWorldRegistriesProvider &, std::string const&, Json::Value &)const;
};
