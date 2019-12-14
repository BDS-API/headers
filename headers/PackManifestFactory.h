#pragma once

class PackManifestFactory {

public:
    static long PackManifestFactory::REQUIRED_VANILLA_FOR_OLD_PACKS;


    void contentKeyLookup(std::string const&);
    void alternateContentKeyLookup(std::string const&);
    void appendKeys(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    void PackManifestFactory(IPackTelemetry &);
    void create(PackAccessStrategy &, ResourceLocation const&, PackReport &, SubpackInfoCollection *);
};
