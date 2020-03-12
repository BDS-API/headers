#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include <functional>


class ResourcePackRepository {

public:
    class KnownPackContainer;
    class KnownPackInfo;

    static std::string RESOURCE_PACKS_PATH;
    static std::string BEHAVIOR_PACK_PATH;
    static std::string DEVELOPMENT_RESOURCE_PACKS_PATH;
    static std::string DEVELOPMENT_BEHAVIOR_PACKS_PATH;
    static std::string DEVELOPMENT_SKIN_PACKS_PATH;
    static std::string TREATMENT_PACK_PATH;
    static std::string SKIN_PACKS_PATH;
    static std::string KNOWN_VALID_PACKS_FILE_NAME;
    static std::string KNOWN_INVALID_PACKS_FILE_NAME;
    static std::string GLOBAL_RESOURCE_PACKS_FILENAME;
    static long CHEMISTRY_PACK_UUID;
    static long CHEMISTRY_SERVER_PACK_UUID;
    static std::string EXPECTED_EXTENSIONS;

    void getPackSettingsFactory()const;
    std::string getPremiumBehaviorPackPath();
    void getResourcePackForPackId(PackIdVersion const&)const;
    void addKnownPackFromImport(PackManifest const&);
//  std::string getKnownPacksPath(KnownPackType)const; //TODO: incomplete function definition
    void _addResourcePackIfNotAlreadyAdded(Pack &);
    void _removePack(ResourceLocation const&, bool);
    std::string getDevelopmentSkinPacksPath()const;
//  void getInvalidPacks(PackType)const; //TODO: incomplete function definition
    void getPackManifestFactory();
    std::string getDevelopmentResourcePacksPath()const;
    std::string getPremiumWorldTemplatePath();
    void requestReloadUserPacks();
    void refreshPacks();
//  void _updateKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    ~ResourcePackRepository();
//  void addInvalidPack(ResourceLocation const&, PackType); //TODO: incomplete function definition
//  void _saveKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    std::string getKnownInvalidPacksPath()const;
    void _initializeWorldPackSource();
    std::string getCachedBehaviorPacksPath();
//  void _detectKnownPacksChange(ResourcePackRepository::KnownPackContainer &, ResourcePackRepository::KnownPackContainer const&, KnownPackType); //TODO: incomplete function definition
    void _packLogVersionIsUpToDate(Json::Value const&);
    void registerResourcePackRemovedCallback(void *, std::function<void (ResourcePack *)>);
    std::string getTemporaryPremiumResourcePacksPath();
    std::string getPremiumResourcePackPath();
//  void _packExists(mce::UUID const&, SemVersion const&, PackOrigin)const; //TODO: incomplete function definition
    void _initialize();
    ResourcePackRepository(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool);
    std::string getTemporaryPremiumBehaviorPacksPath();
    void getResourcePackForPackIdOwned(PackIdVersion const&)const;
    void getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance> &)const;
    void getPackSourceFactory();
//  void getPacksByType(PackType)const; //TODO: incomplete function definition
    void _triggerRemoveResourcePackCallback(ResourcePack *);
    std::string getExpectedFileExtensions();
//  void _updatePackLogVersion(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
//  void getPacksByResourceLocation(PackOrigin)const; //TODO: incomplete function definition
    void removePacksLoadedFromCache();
    void getVanillaPack()const;
    void getResourcePackSatisfiesPackId(PackIdVersion const&, bool)const;
    void _initializeCachedPackSource();
    void _loadPacks(bool);
    std::string getTreatmentPacksPath()const;
    void removePacksLoadedFromWorld();
    void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const*);
    void getResourcePackByUUID(mce::UUID const&)const;
    void _initializePackSource();
    void _refreshPacks();
    void _initializePremiumWorldTemplatePackSource();
    std::string getBehaviorPacksPath()const;
    void getChemistryServerPack()const;
    void _findVanillaPacks();
    void getPackLoadingReport()const;
    void getResourcePackInPath(Core::Path const&)const;
    void untrackInvalidPack(ResourceLocation const&);
    void getKeyProvider()const;
    std::string getDevelopmentBehaviorPacksPath()const;
    std::string getGlobalResourcePacksPath();
    void getInvalidPacks(InvalidPacksFilterGroup const&)const;
    void deletePackFiles(ResourceLocation const&);
//  void _loadLastKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    std::string getKnownValidPacksPath()const;
    std::string getCachedResourcePacksPath();
    void postDeletePack(ResourceLocation const&);
    void deletePack(ResourceLocation const&);
    std::string getSkinPacksPath()const;
    void unregisterResourcePackRemovedCallback(void *);
    std::string getResourcePacksPath()const;
    void addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&);
    std::string getPremiumPackPath();
    bool isInitialized();
    void _reloadUserPacks();
    void _validateDependencies();
    void addWorldResourcePacks(Core::Path const&);
//  bool isResourcePackLoaded(PackIdVersion const&, PackOrigin const&); //TODO: incomplete function definition
    void getResourcePackContainingModule(PackIdVersion const&)const;
    class KnownPackContainer {

    public:
        ~KnownPackContainer();
        void getPack(PackIdVersion const&)const;
        void addPack(ResourcePackRepository::KnownPackInfo &&);
        void getPack(ResourceLocation const&);
        void operator==(ResourcePackRepository::KnownPackContainer const&)const;
        void getPack(ResourceLocation const&)const;
        void addPack(ResourcePackRepository::KnownPackInfo const&);
        void getPacks();
        void getPack(PackIdVersion const&);
        KnownPackContainer();
        void getPacks()const;
        bool hasPack(ResourcePackRepository::KnownPackInfo const&)const;
        void operator!=(ResourcePackRepository::KnownPackContainer const&)const;
    };
    class KnownPackInfo {

    public:
        ~KnownPackInfo();
        void operator==(ResourcePackRepository::KnownPackInfo const&)const;
        KnownPackInfo();
        KnownPackInfo(ResourcePackRepository::KnownPackInfo const&);
        void operator!=(ResourcePackRepository::KnownPackInfo const&)const;
    };
};
