#pragma once

#include "../eventing/IMinecraftEventing"
#include "../../core/FilePathManager"
#include "../../unmapped/PackInstanceId"
#include "../../unmapped/PackSourceFactory"
#include "../../unmapped/ResourceLocation"
#include "../../unmapped/IContentAccessibilityProvider"
#include "../../mce/UUID"
#include "../../core/Path"
#include "../../unmapped/Pack"
#include "../../unmapped/PackManifestFactory"
#include "../../json/Value"
#include "../../unmapped/PackInstance"
#include "../../unmapped/InvalidPacksFilterGroup"
#include "../pack/PackManifest"
#include "../../unmapped/ContentIdentity"
#include "../../unmapped/SemVersion"
#include "../../unmapped/PackIdVersion"


class ResourcePackRepository {

public:
    static long RESOURCE_PACKS_PATH[abi:cxx11];
    static long BEHAVIOR_PACK_PATH[abi:cxx11];
    static long DEVELOPMENT_RESOURCE_PACKS_PATH[abi:cxx11];
    static long DEVELOPMENT_BEHAVIOR_PACKS_PATH[abi:cxx11];
    static long DEVELOPMENT_SKIN_PACKS_PATH[abi:cxx11];
    static long TREATMENT_PACK_PATH[abi:cxx11];
    static long SKIN_PACKS_PATH[abi:cxx11];
    static long KNOWN_VALID_PACKS_FILE_NAME[abi:cxx11];
    static long KNOWN_INVALID_PACKS_FILE_NAME[abi:cxx11];
    static long GLOBAL_RESOURCE_PACKS_FILENAME[abi:cxx11];
    static long CHEMISTRY_PACK_UUID;
    static long CHEMISTRY_SERVER_PACK_UUID;
    static long EXPECTED_EXTENSIONS[abi:cxx11];


    void getVanillaPack()const;
    ResourcePackRepository(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool);
    void _initializePackSource();
    void _initialize();
    void _loadPacks(bool);
    void _findVanillaPacks();
    void _reloadUserPacks();
    void _refreshPacks();
    void addInvalidPack(ResourceLocation const&, PackType);
    void _validateDependencies();
    void _updateKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType);
    void _initializeCachedPackSource();
    void _initializeWorldPackSource();
    void _initializePremiumWorldTemplatePackSource();
    void getResourcePackForPackId(PackIdVersion const&)const;
    void _triggerRemoveResourcePackCallback(ResourcePack *);
    void _addResourcePackIfNotAlreadyAdded(Pack &);
    void _packExists(mce::UUID const&, SemVersion const&, PackOrigin)const;
    void getResourcePackInPath(Core::Path const&)const;
    bool isResourcePackLoaded(PackIdVersion const&, PackOrigin const&);
    void getPackLoadingReport()const;
    void getResourcePacksByPackId(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&, std::vector&<PackInstance, std::allocator<std::vector&>>)const;
    void getPackSettingsFactory()const;
    void getResourcePackByUUID(mce::UUID const&)const;
    void getResourcePackForPackIdOwned(PackIdVersion const&)const;
    void getResourcePackSatisfiesPackId(PackIdVersion const&, bool)const;
    void getResourcePackContainingModule(PackIdVersion const&)const;
    void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const*);
    void refreshPacks();
    void addWorldResourcePacks(Core::Path const&);
    void addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&);
    void removePacksLoadedFromCache();
    void removePacksLoadedFromWorld();
    void _loadLastKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType);
    void _detectKnownPacksChange(ResourcePackRepository::KnownPackContainer &, ResourcePackRepository::KnownPackContainer const&, KnownPackType);
    void _saveKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType);
    void _packLogVersionIsUpToDate(Json::Value const&);
    void _updatePackLogVersion(ResourcePackRepository::KnownPackContainer &, KnownPackType);
    void getPacksByResourceLocation(PackOrigin)const;
    void getPacksByType(PackType)const;
    void addKnownPackFromImport(PackManifest const&);
    void getInvalidPacks(PackType)const;
    void getInvalidPacks(InvalidPacksFilterGroup const&)const;
    void deletePack(ResourceLocation const&);
    void deletePackFiles(ResourceLocation const&);
    void postDeletePack(ResourceLocation const&);
    void untrackInvalidPack(ResourceLocation const&);
    void _removePack(ResourceLocation const&, bool);
    bool isInitialized();
    void registerResourcePackRemovedCallback(void *, std::function<void ()(ResourcePack *)>);
    void unregisterResourcePackRemovedCallback(void *);
    void requestReloadUserPacks();
    void getKeyProvider()const;
    void getPackManifestFactory();
    void getPackSourceFactory();
    void getChemistryServerPack()const;
};
