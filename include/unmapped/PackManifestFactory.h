#pragma once

#include "./SubpackInfoCollection.h"
#include <utility>
#include <unordered_map>
#include <memory>
#include "./ResourceLocation.h"
#include "./IPackTelemetry.h"
#include "./PackReport.h"
#include <functional>
#include "../bedrock/pack/PackAccessStrategy.h"
#include <string>


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


    void contentKeyLookup(std::string const&);
    void alternateContentKeyLookup(std::string const&);
//  void appendKeys(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); //TODO: incomplete function definition
    PackManifestFactory(IPackTelemetry &);
    void create(PackAccessStrategy &, ResourceLocation const&, PackReport &, SubpackInfoCollection *);
};
