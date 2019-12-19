#pragma once

class FeatureTypeFactory {

public:

    FeatureTypeFactory(void);
    void processFeature(IWorldRegistriesProvider &, std::string const&, Json::Value &)const;
};
