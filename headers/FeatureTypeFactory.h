#pragma once

class FeatureTypeFactory {

public:

    void FeatureTypeFactory(void);
    void processFeature(IWorldRegistriesProvider &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value &)const;
};
