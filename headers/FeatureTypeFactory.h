#pragma once

class FeatureTypeFactory {

public:

    void FeatureTypeFactory(void);
    void processFeature(IWorldRegistriesProvider &, std::string const&, Json::Value &)const;
};
