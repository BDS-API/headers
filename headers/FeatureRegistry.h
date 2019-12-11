#pragma once

class FeatureRegistry {

public:

    void FeatureRegistry(void);
    void loadFromDefinitions(IWorldRegistriesProvider &, ResourcePackManager const&, bool);
    void _reverseLookup(unsigned long)const;
    void _setupFeature(IWorldRegistriesProvider &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void reserveFeature(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void lookupByNameDEPRECATED(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void cleanupFeatures(void);
    void getFeatureRegistrySize(void)const;
};
