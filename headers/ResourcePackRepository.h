#pragma once

class ResourcePackRepository {

public:
    static long ResourcePackRepository::CHEMISTRY_PACK_UUID;
    static long ResourcePackRepository::CHEMISTRY_SERVER_PACK_UUID;


    void getVanillaPack(void)const;
    void ResourcePackRepository(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool);
    void _initializePackSource(void);
    void _initialize(void);
    void _loadPacks(bool);
    void _findVanillaPacks(void);
    void _reloadUserPacks(void);
    void _refreshPacks(void);
    void addInvalidPack(ResourceLocation const&, PackType);
    void _validateDependencies(void);
    void _updateKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType);
    void _initializeCachedPackSource(void);
    void _initializeWorldPackSource(void);
    void _initializePremiumWorldTemplatePackSource(void);
    void getResourcePackForPackId(PackIdVersion const&)const;
    void _triggerRemoveResourcePackCallback(ResourcePack *);
    void _addResourcePackIfNotAlreadyAdded(Pack &);
    void _packExists(mce::UUID const&, SemVersion const&, PackOrigin)const;
    void getResourcePackInPath(Core::Path const&)const;
    bool isResourcePackLoaded(PackIdVersion const&, PackOrigin const&);
    void getPackLoadingReport(void)const;
    void getResourcePacksByPackId(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&, std::vector&<PackInstance, std::allocator<std::vector&>>)const;
    void getPackSettingsFactory(void)const;
    void getResourcePackByUUID(mce::UUID const&)const;
    void getResourcePackForPackIdOwned(PackIdVersion const&)const;
    void getResourcePackSatisfiesPackId(PackIdVersion const&, bool)const;
    void getResourcePackContainingModule(PackIdVersion const&)const;
    void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const*);
    void refreshPacks(void);
    void addWorldResourcePacks(Core::Path const&);
    void addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&);
    void removePacksLoadedFromCache(void);
    void removePacksLoadedFromWorld(void);
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
    bool isInitialized(void);
    void registerResourcePackRemovedCallback(void *, std::function<void ()(ResourcePack *)>);
    void unregisterResourcePackRemovedCallback(void *);
    void requestReloadUserPacks(void);
    void getKeyProvider(void)const;
    void getPackManifestFactory(void);
    void getPackSourceFactory(void);
    void getChemistryServerPack(void)const;
};
