#pragma once

#include <string>
#include <unordered_map>


class PackManifestFactory {

public:
    static std::string mContentKeys;
    static std::string mAlternateContentKeys;
    static std::string MANIFEST_PATH;
    static std::string MANIFEST_PATH_OLD;
    static std::string MANIFEST_PATH_OLD_BACKUP;
    static std::string MANIFEST_LOG_PATH;
    static std::string MANIFEST_PACK_UUID_UPGRADE_SALT;
    static long REQUIRED_VANILLA_FOR_OLD_PACKS;

    void alternateContentKeyLookup(std::string const&);
    PackManifestFactory(IPackTelemetry &);
    void appendKeys(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    void contentKeyLookup(std::string const&);
    void create(PackAccessStrategy &, ResourceLocation const&, PackReport &, SubpackInfoCollection *);
};
