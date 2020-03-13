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

    void contentKeyLookup(std::string const&); // _ZN19PackManifestFactory16contentKeyLookupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void alternateContentKeyLookup(std::string const&); // _ZN19PackManifestFactory25alternateContentKeyLookupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void appendKeys(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); // _ZN19PackManifestFactory10appendKeysERKSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4hashIS6_ESt8equal_toIS6_ESaISt4pairIKS6_S6_EEE
    PackManifestFactory(IPackTelemetry &); // _ZN19PackManifestFactoryC2ER14IPackTelemetry
    void create(PackAccessStrategy &, ResourceLocation const&, PackReport &, SubpackInfoCollection *); // _ZN19PackManifestFactory6createER18PackAccessStrategyRK16ResourceLocationR10PackReportP21SubpackInfoCollection
};
