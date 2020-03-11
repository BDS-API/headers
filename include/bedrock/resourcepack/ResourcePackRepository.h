#pragma once

#include <unordered_map>
#include "../../unmapped/PackIdVersion.h"
#include "../../unmapped/InvalidPacksFilterGroup.h"
#include <functional>
#include "../../unmapped/IContentAccessibilityProvider.h"
#include "../../unmapped/ContentIdentity.h"
#include "../../unmapped/SemVersion.h"
#include "../../unmapped/PackInstance.h"
#include "../../core/FilePathManager.h"
#include "../eventing/IMinecraftEventing.h"
#include "../../unmapped/Pack.h"
#include "../../unmapped/PackSourceFactory.h"
#include "../../core/Path.h"
#include "./ResourcePack.h"
#include "../../json/Value.h"
#include <utility>
#include "../../unmapped/KnownPackContainer.h"
#include "../../mce/UUID.h"
#include "../../unmapped/PackInstanceId.h"
#include "../../unmapped/ResourceLocation.h"
#include <memory>
#include <vector>
#include "../../unmapped/PackManifestFactory.h"
#include "../pack/PackManifest.h"
#include <string>


class ResourcePackRepository {

public:
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


    void getVanillaPack()const;
    ResourcePackRepository(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool);
    void _initializePackSource();
    void _initialize();
    std::string getTreatmentPacksPath()const;
    std::string getPremiumWorldTemplatePath();
    std::string getPremiumBehaviorPackPath();
    std::string getPremiumResourcePackPath();
    std::string getBehaviorPacksPath()const;
    std::string getResourcePacksPath()const;
    void _loadPacks(bool);
    void _findVanillaPacks();
    std::string getPremiumPackPath();
    std::string getDevelopmentResourcePacksPath()const;
    std::string getDevelopmentBehaviorPacksPath()const;
    std::string getDevelopmentSkinPacksPath()const;
    void _reloadUserPacks();
    void _refreshPacks();
//  void addInvalidPack(ResourceLocation const&, PackType); //TODO: incomplete function definition
    void _validateDependencies();
//  void _updateKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    void _initializeCachedPackSource();
    std::string getTemporaryPremiumResourcePacksPath();
    std::string getTemporaryPremiumBehaviorPacksPath();
    std::string getCachedResourcePacksPath();
    std::string getCachedBehaviorPacksPath();
    void _initializeWorldPackSource();
    void _initializePremiumWorldTemplatePackSource();
    void getResourcePackForPackId(PackIdVersion const&)const;
    void _triggerRemoveResourcePackCallback(ResourcePack *);
    ~ResourcePackRepository();
    void _addResourcePackIfNotAlreadyAdded(Pack &);
//  void _packExists(mce::UUID const&, SemVersion const&, PackOrigin)const; //TODO: incomplete function definition
    void getResourcePackInPath(Core::Path const&)const;
//  bool isResourcePackLoaded(PackIdVersion const&, PackOrigin const&); //TODO: incomplete function definition
    void getPackLoadingReport()const;
    void getResourcePacksByPackId(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&, std::vector<PackInstance, std::allocator<std::vector &>> &)const;
    void getPackSettingsFactory()const;
    void getResourcePackByUUID(mce::UUID const&)const;
    void getResourcePackForPackIdOwned(PackIdVersion const&)const;
    void getResourcePackSatisfiesPackId(PackIdVersion const&, bool)const;
    void getResourcePackContainingModule(PackIdVersion const&)const;
//  void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const*); //TODO: incomplete function definition
    void refreshPacks();
    void addWorldResourcePacks(Core::Path const&);
    void addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&);
    void removePacksLoadedFromCache();
    void removePacksLoadedFromWorld();
    std::string getGlobalResourcePacksPath();
    std::string getSkinPacksPath()const;
//  std::string getKnownPacksPath(KnownPackType)const; //TODO: incomplete function definition
    std::string getKnownValidPacksPath()const;
    std::string getKnownInvalidPacksPath()const;
//  void _loadLastKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
//  void _detectKnownPacksChange(ResourcePackRepository::KnownPackContainer &, ResourcePackRepository::KnownPackContainer const&, KnownPackType); //TODO: incomplete function definition
//  void _saveKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
    void _packLogVersionIsUpToDate(Json::Value const&);
//  void _updatePackLogVersion(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition
//  void getPacksByResourceLocation(PackOrigin)const; //TODO: incomplete function definition
//  void getPacksByType(PackType)const; //TODO: incomplete function definition
    void addKnownPackFromImport(PackManifest const&);
//  void getInvalidPacks(PackType)const; //TODO: incomplete function definition
    void getInvalidPacks(InvalidPacksFilterGroup const&)const;
    void deletePack(ResourceLocation const&);
    void deletePackFiles(ResourceLocation const&);
    void postDeletePack(ResourceLocation const&);
    void untrackInvalidPack(ResourceLocation const&);
    void _removePack(ResourceLocation const&, bool);
    bool isInitialized();
//  void registerResourcePackRemovedCallback(void *, std::function<void (ResourcePack *)>); //TODO: incomplete function definition
//  void unregisterResourcePackRemovedCallback(void *); //TODO: incomplete function definition
    void requestReloadUserPacks();
    void getKeyProvider()const;
    void getPackManifestFactory();
    void getPackSourceFactory();
    std::string getExpectedFileExtensions();
    void getChemistryServerPack()const;
};
