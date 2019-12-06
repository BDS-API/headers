#pragma once

class PackManifestFactory {

public:
    static long PackManifestFactory::REQUIRED_VANILLA_FOR_OLD_PACKS;


    void contentKeyLookup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void alternateContentKeyLookup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void appendKeys(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    void PackManifestFactory(IPackTelemetry &);
    void create(PackAccessStrategy &, ResourceLocation const&, PackReport &, SubpackInfoCollection *);
};
