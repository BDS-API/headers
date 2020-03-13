#pragma once

#include <string>
#include <functional>
#include <unordered_map>
#include <vector>


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

    void getVanillaPack()const; // _ZNK22ResourcePackRepository14getVanillaPackEv
    ResourcePackRepository(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool); // _ZN22ResourcePackRepositoryC2ER18IMinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderPN4Core15FilePathManagerER17PackSourceFactoryb
    void _initializePackSource(); // _ZN22ResourcePackRepository21_initializePackSourceEv
    void _initialize(); // _ZN22ResourcePackRepository11_initializeEv
    std::string getTreatmentPacksPath()const; // _ZNK22ResourcePackRepository21getTreatmentPacksPathB5cxx11Ev
    std::string getPremiumWorldTemplatePath(); // _ZN22ResourcePackRepository27getPremiumWorldTemplatePathB5cxx11Ev
    std::string getPremiumBehaviorPackPath(); // _ZN22ResourcePackRepository26getPremiumBehaviorPackPathB5cxx11Ev
    std::string getPremiumResourcePackPath(); // _ZN22ResourcePackRepository26getPremiumResourcePackPathB5cxx11Ev
    std::string getBehaviorPacksPath()const; // _ZNK22ResourcePackRepository20getBehaviorPacksPathB5cxx11Ev
    std::string getResourcePacksPath()const; // _ZNK22ResourcePackRepository20getResourcePacksPathB5cxx11Ev
    void _loadPacks(bool); // _ZN22ResourcePackRepository10_loadPacksEb
    void _findVanillaPacks(); // _ZN22ResourcePackRepository17_findVanillaPacksEv
    std::string getPremiumPackPath(); // _ZN22ResourcePackRepository18getPremiumPackPathB5cxx11Ev
    std::string getDevelopmentResourcePacksPath()const; // _ZNK22ResourcePackRepository31getDevelopmentResourcePacksPathB5cxx11Ev
    std::string getDevelopmentBehaviorPacksPath()const; // _ZNK22ResourcePackRepository31getDevelopmentBehaviorPacksPathB5cxx11Ev
    std::string getDevelopmentSkinPacksPath()const; // _ZNK22ResourcePackRepository27getDevelopmentSkinPacksPathB5cxx11Ev
    void _reloadUserPacks(); // _ZN22ResourcePackRepository16_reloadUserPacksEv
    void _refreshPacks(); // _ZN22ResourcePackRepository13_refreshPacksEv
//  void addInvalidPack(ResourceLocation const&, PackType); //TODO: incomplete function definition // _ZN22ResourcePackRepository14addInvalidPackERK16ResourceLocation8PackType
    void _validateDependencies(); // _ZN22ResourcePackRepository21_validateDependenciesEv
//  void _updateKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition // _ZN22ResourcePackRepository21_updateKnownUserPacksERNS_18KnownPackContainerE13KnownPackType
    void _initializeCachedPackSource(); // _ZN22ResourcePackRepository27_initializeCachedPackSourceEv
    std::string getTemporaryPremiumResourcePacksPath(); // _ZN22ResourcePackRepository36getTemporaryPremiumResourcePacksPathB5cxx11Ev
    std::string getTemporaryPremiumBehaviorPacksPath(); // _ZN22ResourcePackRepository36getTemporaryPremiumBehaviorPacksPathB5cxx11Ev
    std::string getCachedResourcePacksPath(); // _ZN22ResourcePackRepository26getCachedResourcePacksPathB5cxx11Ev
    std::string getCachedBehaviorPacksPath(); // _ZN22ResourcePackRepository26getCachedBehaviorPacksPathB5cxx11Ev
    void _initializeWorldPackSource(); // _ZN22ResourcePackRepository26_initializeWorldPackSourceEv
    void _initializePremiumWorldTemplatePackSource(); // _ZN22ResourcePackRepository41_initializePremiumWorldTemplatePackSourceEv
    void getResourcePackForPackId(PackIdVersion const&)const; // _ZNK22ResourcePackRepository24getResourcePackForPackIdERK13PackIdVersion
    void _triggerRemoveResourcePackCallback(ResourcePack *); // _ZN22ResourcePackRepository34_triggerRemoveResourcePackCallbackEP12ResourcePack
    ~ResourcePackRepository(); // _ZN22ResourcePackRepositoryD2Ev
    void _addResourcePackIfNotAlreadyAdded(Pack &); // _ZN22ResourcePackRepository33_addResourcePackIfNotAlreadyAddedER4Pack
//  void _packExists(mce::UUID const&, SemVersion const&, PackOrigin)const; //TODO: incomplete function definition // _ZNK22ResourcePackRepository11_packExistsERKN3mce4UUIDERK10SemVersion10PackOrigin
    void getResourcePackInPath(Core::Path const&)const; // _ZNK22ResourcePackRepository21getResourcePackInPathERKN4Core4PathE
//  bool isResourcePackLoaded(PackIdVersion const&, PackOrigin const&); //TODO: incomplete function definition // _ZN22ResourcePackRepository20isResourcePackLoadedERK13PackIdVersionRK10PackOrigin
    void getPackLoadingReport()const; // _ZNK22ResourcePackRepository20getPackLoadingReportEv
    void getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance> &)const; // _ZNK22ResourcePackRepository24getResourcePacksByPackIdERKSt6vectorI14PackInstanceIdSaIS1_EERS0_I12PackInstanceSaIS6_EE
    void getPackSettingsFactory()const; // _ZNK22ResourcePackRepository22getPackSettingsFactoryEv
    void getResourcePackByUUID(mce::UUID const&)const; // _ZNK22ResourcePackRepository21getResourcePackByUUIDERKN3mce4UUIDE
    void getResourcePackForPackIdOwned(PackIdVersion const&)const; // _ZNK22ResourcePackRepository29getResourcePackForPackIdOwnedERK13PackIdVersion
    void getResourcePackSatisfiesPackId(PackIdVersion const&, bool)const; // _ZNK22ResourcePackRepository30getResourcePackSatisfiesPackIdERK13PackIdVersionb
    void getResourcePackContainingModule(PackIdVersion const&)const; // _ZNK22ResourcePackRepository31getResourcePackContainingModuleERK13PackIdVersion
    void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const*); // _ZN22ResourcePackRepository22addCachedResourcePacksEPKSt13unordered_mapI15ContentIdentityNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    void refreshPacks(); // _ZN22ResourcePackRepository12refreshPacksEv
    void addWorldResourcePacks(Core::Path const&); // _ZN22ResourcePackRepository21addWorldResourcePacksERKN4Core4PathE
    void addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&); // _ZN22ResourcePackRepository36addPremiumWorldTemplateResourcePacksERKN4Core4PathERK15ContentIdentity
    void removePacksLoadedFromCache(); // _ZN22ResourcePackRepository26removePacksLoadedFromCacheEv
    void removePacksLoadedFromWorld(); // _ZN22ResourcePackRepository26removePacksLoadedFromWorldEv
    std::string getGlobalResourcePacksPath(); // _ZN22ResourcePackRepository26getGlobalResourcePacksPathB5cxx11Ev
    std::string getSkinPacksPath()const; // _ZNK22ResourcePackRepository16getSkinPacksPathB5cxx11Ev
//  std::string getKnownPacksPath(KnownPackType)const; //TODO: incomplete function definition // _ZNK22ResourcePackRepository17getKnownPacksPathB5cxx11E13KnownPackType
    std::string getKnownValidPacksPath()const; // _ZNK22ResourcePackRepository22getKnownValidPacksPathB5cxx11Ev
    std::string getKnownInvalidPacksPath()const; // _ZNK22ResourcePackRepository24getKnownInvalidPacksPathB5cxx11Ev
//  void _loadLastKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition // _ZN22ResourcePackRepository23_loadLastKnownUserPacksERNS_18KnownPackContainerE13KnownPackType
//  void _detectKnownPacksChange(ResourcePackRepository::KnownPackContainer &, ResourcePackRepository::KnownPackContainer const&, KnownPackType); //TODO: incomplete function definition // _ZN22ResourcePackRepository23_detectKnownPacksChangeERNS_18KnownPackContainerERKS0_13KnownPackType
//  void _saveKnownUserPacks(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition // _ZN22ResourcePackRepository19_saveKnownUserPacksERNS_18KnownPackContainerE13KnownPackType
    void _packLogVersionIsUpToDate(Json::Value const&); // _ZN22ResourcePackRepository25_packLogVersionIsUpToDateERKN4Json5ValueE
//  void _updatePackLogVersion(ResourcePackRepository::KnownPackContainer &, KnownPackType); //TODO: incomplete function definition // _ZN22ResourcePackRepository21_updatePackLogVersionERNS_18KnownPackContainerE13KnownPackType
//  void getPacksByResourceLocation(PackOrigin)const; //TODO: incomplete function definition // _ZNK22ResourcePackRepository26getPacksByResourceLocationE10PackOrigin
//  void getPacksByType(PackType)const; //TODO: incomplete function definition // _ZNK22ResourcePackRepository14getPacksByTypeE8PackType
    void addKnownPackFromImport(PackManifest const&); // _ZN22ResourcePackRepository22addKnownPackFromImportERK12PackManifest
//  void getInvalidPacks(PackType)const; //TODO: incomplete function definition // _ZNK22ResourcePackRepository15getInvalidPacksE8PackType
    void getInvalidPacks(InvalidPacksFilterGroup const&)const; // _ZNK22ResourcePackRepository15getInvalidPacksERK23InvalidPacksFilterGroup
    void deletePack(ResourceLocation const&); // _ZN22ResourcePackRepository10deletePackERK16ResourceLocation
    void deletePackFiles(ResourceLocation const&); // _ZN22ResourcePackRepository15deletePackFilesERK16ResourceLocation
    void postDeletePack(ResourceLocation const&); // _ZN22ResourcePackRepository14postDeletePackERK16ResourceLocation
    void untrackInvalidPack(ResourceLocation const&); // _ZN22ResourcePackRepository18untrackInvalidPackERK16ResourceLocation
    void _removePack(ResourceLocation const&, bool); // _ZN22ResourcePackRepository11_removePackERK16ResourceLocationb
    bool isInitialized(); // _ZN22ResourcePackRepository13isInitializedEv
    void registerResourcePackRemovedCallback(void *, std::function<void (ResourcePack *)>); // _ZN22ResourcePackRepository35registerResourcePackRemovedCallbackEPvSt8functionIFvP12ResourcePackEE
    void unregisterResourcePackRemovedCallback(void *); // _ZN22ResourcePackRepository37unregisterResourcePackRemovedCallbackEPv
    void requestReloadUserPacks(); // _ZN22ResourcePackRepository22requestReloadUserPacksEv
    void getKeyProvider()const; // _ZNK22ResourcePackRepository14getKeyProviderEv
    void getPackManifestFactory(); // _ZN22ResourcePackRepository22getPackManifestFactoryEv
    void getPackSourceFactory(); // _ZN22ResourcePackRepository20getPackSourceFactoryEv
    std::string getExpectedFileExtensions(); // _ZN22ResourcePackRepository25getExpectedFileExtensionsB5cxx11Ev
    void getChemistryServerPack()const; // _ZNK22ResourcePackRepository22getChemistryServerPackEv
    class KnownPackContainer {

    public:
        bool hasPack(ResourcePackRepository::KnownPackInfo const&)const; // _ZNK22ResourcePackRepository18KnownPackContainer7hasPackERKNS_13KnownPackInfoE
        void addPack(ResourcePackRepository::KnownPackInfo &&); // _ZN22ResourcePackRepository18KnownPackContainer7addPackEONS_13KnownPackInfoE
        void operator!=(ResourcePackRepository::KnownPackContainer const&)const; // _ZNK22ResourcePackRepository18KnownPackContainerneERKS0_
        void getPacks(); // _ZN22ResourcePackRepository18KnownPackContainer8getPacksEv
        void getPacks()const; // _ZNK22ResourcePackRepository18KnownPackContainer8getPacksEv
        void getPack(PackIdVersion const&); // _ZN22ResourcePackRepository18KnownPackContainer7getPackERK13PackIdVersion
        void getPack(ResourceLocation const&); // _ZN22ResourcePackRepository18KnownPackContainer7getPackERK16ResourceLocation
        void addPack(ResourcePackRepository::KnownPackInfo const&); // _ZN22ResourcePackRepository18KnownPackContainer7addPackERKNS_13KnownPackInfoE
        void getPack(PackIdVersion const&)const; // _ZNK22ResourcePackRepository18KnownPackContainer7getPackERK13PackIdVersion
        void getPack(ResourceLocation const&)const; // _ZNK22ResourcePackRepository18KnownPackContainer7getPackERK16ResourceLocation
        void operator==(ResourcePackRepository::KnownPackContainer const&)const; // _ZNK22ResourcePackRepository18KnownPackContainereqERKS0_
        KnownPackContainer(); // _ZN22ResourcePackRepository18KnownPackContainerC2Ev
        ~KnownPackContainer(); // _ZN22ResourcePackRepository18KnownPackContainerD2Ev
    };
    class KnownPackInfo {

    public:
        void operator==(ResourcePackRepository::KnownPackInfo const&)const; // _ZNK22ResourcePackRepository13KnownPackInfoeqERKS0_
        void operator!=(ResourcePackRepository::KnownPackInfo const&)const; // _ZNK22ResourcePackRepository13KnownPackInfoneERKS0_
        KnownPackInfo(); // _ZN22ResourcePackRepository13KnownPackInfoC2Ev
        ~KnownPackInfo(); // _ZN22ResourcePackRepository13KnownPackInfoD2Ev
        KnownPackInfo(ResourcePackRepository::KnownPackInfo const&); // _ZN22ResourcePackRepository13KnownPackInfoC2ERKS0_
    };
};
