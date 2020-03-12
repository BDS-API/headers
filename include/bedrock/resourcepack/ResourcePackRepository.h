#pragma once

#include <unordered_map>
#include "../pack/PackManifest.h"
#include <memory>
#include "../../unmapped/PackInstanceId.h"
#include "../../core/Path.h"
#include "ResourcePack.h"
#include <string>
#include <functional>
#include "../../unmapped/Pack.h"
#include "../../unmapped/PackIdVersion.h"
#include "../../unmapped/InvalidPacksFilterGroup.h"
#include "../../json/Value.h"
#include "../../mce/UUID.h"
#include <vector>
#include "../../unmapped/SemVersion.h"
#include <utility>
#include "../../unmapped/ResourceLocation.h"
#include "../../unmapped/PackSourceFactory.h"
#include "../eventing/IMinecraftEventing.h"
#include "../../unmapped/ContentIdentity.h"
#include "../../unmapped/PackInstance.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../core/FilePathManager.h"
#include "../../unmapped/IContentAccessibilityProvider.h"


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

    void getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance> &)const;
    void addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&);
    void untrackInvalidPack(ResourceLocation const&);
    std::string getKnownInvalidPacksPath()const;
    void _triggerRemoveResourcePackCallback(ResourcePack *);
    void _initializePremiumWorldTemplatePackSource();
    void addWorldResourcePacks(Core::Path const&);
    std::string getPremiumWorldTemplatePath();
    void _loadPacks(bool);
    void postDeletePack(ResourceLocation const&);
//  void _loadLastKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    std::string getCachedBehaviorPacksPath();
    void getPackManifestFactory();
    void removePacksLoadedFromWorld();
    void getResourcePackContainingModule(PackIdVersion const&)const;
    void getChemistryServerPack()const;
//  bool isResourcePackLoaded(PackIdVersion const&, PackOrigin const&); //TODO: incomplete function definition
    void _reloadUserPacks();
    bool isInitialized();
    std::string getResourcePacksPath()const;
    void getPackSourceFactory();
    void deletePack(ResourceLocation const&);
//  void _saveKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
//  void getPacksByResourceLocation(PackOrigin)const; //TODO: incomplete function definition
    void removePacksLoadedFromCache();
//  void getInvalidPacks(PackType)const; //TODO: incomplete function definition
    std::string getTemporaryPremiumResourcePacksPath();
    std::string getExpectedFileExtensions();
    void _packLogVersionIsUpToDate(Json::Value const&);
    std::string getPremiumBehaviorPackPath();
    ~ResourcePackRepository();
    std::string getCachedResourcePacksPath();
    std::string getDevelopmentSkinPacksPath()const;
    void getKeyProvider()const;
    std::string getBehaviorPacksPath()const;
    void getInvalidPacks(InvalidPacksFilterGroup const&)const;
//  void getPacksByType(PackType)const; //TODO: incomplete function definition
    void _findVanillaPacks();
    ResourcePackRepository(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool);
    void _refreshPacks();
    std::string getPremiumPackPath();
//  void _packExists(mce::UUID const&, SemVersion const&, PackOrigin)const; //TODO: incomplete function definition
    std::string getTemporaryPremiumBehaviorPacksPath();
    void getResourcePackForPackId(PackIdVersion const&)const;
    std::string getDevelopmentResourcePacksPath()const;
    void unregisterResourcePackRemovedCallback(void *);
    std::string getGlobalResourcePacksPath();
//  void _updateKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    void getResourcePackSatisfiesPackId(PackIdVersion const&, bool)const;
    void _initializePackSource();
    void _removePack(ResourceLocation const&, bool);
    void addKnownPackFromImport(PackManifest const&);
//  std::string getKnownPacksPath(KnownPackType)const; //TODO: incomplete function definition
    std::string getKnownValidPacksPath()const;
    void deletePackFiles(ResourceLocation const&);
    std::string getTreatmentPacksPath()const;
    void _initializeWorldPackSource();
//  void addInvalidPack(ResourceLocation const&, PackType); //TODO: incomplete function definition
    void refreshPacks();
    std::string getPremiumResourcePackPath();
//  void _detectKnownPacksChange(ResourcePackRepository::KnownPackContainer &, ResourcePackRepository::KnownPackContainer const&, KnownPackType); //TODO: incomplete function definition
    void _addResourcePackIfNotAlreadyAdded(Pack &);
    void requestReloadUserPacks();
    void getVanillaPack()const;
    void getPackLoadingReport()const;
    void getResourcePackInPath(Core::Path const&)const;
    void getResourcePackByUUID(mce::UUID const&)const;
    void _initializeCachedPackSource();
    void _initialize();
    void getPackSettingsFactory()const;
    std::string getDevelopmentBehaviorPacksPath()const;
    void registerResourcePackRemovedCallback(void *, std::function<void (ResourcePack *)>);
    void getResourcePackForPackIdOwned(PackIdVersion const&)const;
//  void _updatePackLogVersion(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    std::string getSkinPacksPath()const;
    void _validateDependencies();
//  void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const*); //TODO: incomplete function definition
    class KnownPackContainer {

    public:
        void getPack(ResourceLocation const&);
        void getPacks();
        void operator==(ResourcePackRepository::KnownPackContainer const&)const;
        ~KnownPackContainer();
        void getPack(PackIdVersion const&)const;
        void addPack(ResourcePackRepository::KnownPackInfo const&);
        KnownPackContainer();
        void addPack(ResourcePackRepository::KnownPackInfo &&);
        void operator!=(ResourcePackRepository::KnownPackContainer const&)const;
        void getPack(ResourceLocation const&)const;
        void getPacks()const;
        bool hasPack(ResourcePackRepository::KnownPackInfo const&)const;
        void getPack(PackIdVersion const&);
    };
    class KnownPackInfo {

    public:
        void operator!=(ResourcePackRepository::KnownPackInfo const&)const;
        void operator==(ResourcePackRepository::KnownPackInfo const&)const;
        ~KnownPackInfo();
        KnownPackInfo();
        KnownPackInfo(ResourcePackRepository::KnownPackInfo const&);
    };
};
