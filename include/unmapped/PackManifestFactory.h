#pragma once

#include "../bedrock/pack/PackAccessStrategy"


class PackManifestFactory {

public:
    static long mContentKeys[abi:cxx11];
    static long mAlternateContentKeys[abi:cxx11];
    static long MANIFEST_PATH[abi:cxx11];
    static long MANIFEST_PATH_OLD[abi:cxx11];
    static long MANIFEST_PATH_OLD_BACKUP[abi:cxx11];
    static long MANIFEST_LOG_PATH[abi:cxx11];
    static long MANIFEST_PACK_UUID_UPGRADE_SALT[abi:cxx11];
    static long REQUIRED_VANILLA_FOR_OLD_PACKS;


    void contentKeyLookup(std::string const&);
    void alternateContentKeyLookup(std::string const&);
    void appendKeys(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    PackManifestFactory(IPackTelemetry &);
    void create(PackAccessStrategy &, ResourceLocation const&, PackReport &, SubpackInfoCollection *);
};
