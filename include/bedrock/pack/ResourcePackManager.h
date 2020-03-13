#pragma once

#include "ResourceLoader.h"
#include <vector>
#include <memory>
#include <string>
#include <functional>


class ResourcePackManager : ResourceLoader {

public:
    ~ResourcePackManager(); // _ZN19ResourcePackManagerD2Ev
    virtual void load(ResourceLocation const&, std::string &)const; // _ZNK19ResourcePackManager4loadERK16ResourceLocationRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void load(ResourceLocation const&, std::string &, std::vector<std::string> const&)const; // _ZNK19ResourcePackManager4loadERK16ResourceLocationRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS8_SaIS8_EE
    virtual void loadAllVersionsOf(ResourceLocation const&)const; // _ZNK19ResourcePackManager17loadAllVersionsOfERK16ResourceLocation
    virtual bool isInStreamableLocation(ResourceLocation const&)const; // _ZNK19ResourcePackManager22isInStreamableLocationERK16ResourceLocation
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string> const&)const; // _ZNK19ResourcePackManager22isInStreamableLocationERK16ResourceLocationRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
    virtual std::string getPath(ResourceLocation const&)const; // _ZNK19ResourcePackManager7getPathB5cxx11ERK16ResourceLocation
    virtual void getPath(ResourceLocation const&, std::vector<std::string> const&)const; // _ZNK19ResourcePackManager7getPathERK16ResourceLocationRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
    virtual std::string getPathContainingResource(ResourceLocation const&)const; // _ZNK19ResourcePackManager25getPathContainingResourceB5cxx11ERK16ResourceLocation
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string>)const; // _ZNK19ResourcePackManager25getPathContainingResourceERK16ResourceLocationSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
//  virtual bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK19ResourcePackManager13hasCapabilityEN3gsl17basic_string_spanIKcLln1EEE
//  ResourcePackManager(std::function<Core::PathBuffer<std::string> (void)>, ContentTierManager const&, bool); //TODO: incomplete function definition // _ZN19ResourcePackManagerC2ESt8functionIFN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEvEERK18ContentTierManagerb
    void _getResource(Core::Path const&, std::string &)const; // _ZNK19ResourcePackManager12_getResourceERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadText(ResourceLocation const&, std::string &)const; // _ZNK19ResourcePackManager8loadTextERK16ResourceLocationRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const; // _ZNK19ResourcePackManager17loadAllVersionsOfERK16ResourceLocationR25ResourcePackMergeStrategy
    bool hasTexture(ResourceLocation const&)const; // _ZNK19ResourcePackManager10hasTextureERK16ResourceLocation
    bool hasResource(ResourceLocation const&, std::vector<std::string> const&)const; // _ZNK19ResourcePackManager11hasResourceERK16ResourceLocationRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
    bool hasResource(ResourceLocation const&)const; // _ZNK19ResourcePackManager11hasResourceERK16ResourceLocation
    void _getPackForResource(Core::Path const&)const; // _ZNK19ResourcePackManager19_getPackForResourceERKN4Core4PathE
    void getPackIndexForResource(ResourceLocation const&, std::vector<std::string> const&)const; // _ZNK19ResourcePackManager23getPackIndexForResourceERK16ResourceLocationRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
    void getStackSize()const; // _ZNK19ResourcePackManager12getStackSizeEv
    void findAllTexturesInUse()const; // _ZNK19ResourcePackManager20findAllTexturesInUseEv
    void findInPacks(ResourceLocation const&); // _ZN19ResourcePackManager11findInPacksERK16ResourceLocation
//  void setStack(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool); //TODO: incomplete function definition // _ZN19ResourcePackManager8setStackESt10unique_ptrI17ResourcePackStackSt14default_deleteIS1_EE21ResourcePackStackTypeb
    void _handleComposeStack(bool); // _ZN19ResourcePackManager19_handleComposeStackEb
//  void clearStack(ResourcePackStackType, bool); //TODO: incomplete function definition // _ZN19ResourcePackManager10clearStackE21ResourcePackStackTypeb
    void clearPackReports(); // _ZN19ResourcePackManager16clearPackReportsEv
    void mergePackReports(std::vector<PackReport> &); // _ZN19ResourcePackManager16mergePackReportsERSt6vectorI10PackReportSaIS1_EE
//  void getStack(ResourcePackStackType)const; //TODO: incomplete function definition // _ZNK19ResourcePackManager8getStackE21ResourcePackStackType
    void _shouldRebuildStack()const; // _ZNK19ResourcePackManager19_shouldRebuildStackEv
    void composeFullStack(ResourcePackStack &, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&)const; // _ZNK19ResourcePackManager16composeFullStackER17ResourcePackStackRKS0_S3_S3_
    void _composeFullStack(); // _ZN19ResourcePackManager17_composeFullStackEv
    void _notifyFullStackInvalid(); // _ZN19ResourcePackManager23_notifyFullStackInvalidEv
    void _calculateMinEngineVersionFromFullStack(); // _ZN19ResourcePackManager39_calculateMinEngineVersionFromFullStackEv
    void notifyActiveResourcePackChanged(); // _ZN19ResourcePackManager31notifyActiveResourcePackChangedEv
    void _updateLanguageSubpacks(); // _ZN19ResourcePackManager23_updateLanguageSubpacksEv
    void getFullStackMinEngineVersion()const; // _ZNK19ResourcePackManager28getFullStackMinEngineVersionEv
    void registerResourcePackListener(ResourcePackListener &); // _ZN19ResourcePackManager28registerResourcePackListenerER20ResourcePackListener
    void unRegisterResourcePackListener(ResourcePackListener &); // _ZN19ResourcePackManager30unRegisterResourcePackListenerER20ResourcePackListener
    void unRegisterAllResourcePackListener(); // _ZN19ResourcePackManager33unRegisterAllResourcePackListenerEv
    void notifyLanguageSubpacksChanged(); // _ZN19ResourcePackManager29notifyLanguageSubpacksChangedEv
    void getResourcesOfGroup(PackInstance const&, std::string const&)const; // _ZNK19ResourcePackManager19getResourcesOfGroupERK12PackInstanceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>> &)const; // _ZNK19ResourcePackManager20_getResourcesOfGroupERK12PackInstanceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorIN4Core10PathBufferIS8_EESaISE_EE
    void getResourcesOfGroup(std::string const&)const; // _ZNK19ResourcePackManager19getResourcesOfGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isOnlyBaseGamePacks()const; // _ZNK19ResourcePackManager19isOnlyBaseGamePacksEv
    void checkHasExtraLocaleResources(std::string const&)const; // _ZNK19ResourcePackManager28checkHasExtraLocaleResourcesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onLanguageChanged(); // _ZN19ResourcePackManager17onLanguageChangedEv
    void onBaseGamePackDownloadComplete(); // _ZN19ResourcePackManager30onBaseGamePackDownloadCompleteEv
    void handlePendingStackChanges(); // _ZN19ResourcePackManager25handlePendingStackChangesEv
    void forceStackCompose(); // _ZN19ResourcePackManager17forceStackComposeEv
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&)const; //TODO: incomplete function definition // _ZNK19ResourcePackManager16copyPacksToLevelERKN4Core4PathE8PackTypeRK17PackSourceFactoryR19PackManifestFactoryRK19IContentKeyProvider
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&, std::vector<PackInstance> const&)const; //TODO: incomplete function definition // _ZNK19ResourcePackManager16copyPacksToLevelERKN4Core4PathE8PackTypeRK17PackSourceFactoryR19PackManifestFactoryRK19IContentKeyProviderRKSt6vectorI12PackInstanceSaISE_EE
    void getPackSourceReport()const; // _ZNK19ResourcePackManager19getPackSourceReportEv
    void setPackSourceReport(PackSourceReport &&); // _ZN19ResourcePackManager19setPackSourceReportEO16PackSourceReport
    void getPackSettings(PackIdVersion const&); // _ZN19ResourcePackManager15getPackSettingsERK13PackIdVersion
    void ensureSupportedSubpacks(); // _ZN19ResourcePackManager23ensureSupportedSubpacksEv
    bool canSupportPacks(); // _ZN19ResourcePackManager15canSupportPacksEv
    void removeUnsupportedPacks(); // _ZN19ResourcePackManager22removeUnsupportedPacksEv
    void getIncompatiblePacks()const; // _ZNK19ResourcePackManager20getIncompatiblePacksEv
    void setCanUseGlobalPackStack(bool); // _ZN19ResourcePackManager24setCanUseGlobalPackStackEb
    void onLoadingFinished(); // _ZN19ResourcePackManager17onLoadingFinishedEv
    void setExperimentalGameplay(bool); // _ZN19ResourcePackManager23setExperimentalGameplayEb
    bool isExperimentalGameplay()const; // _ZNK19ResourcePackManager22isExperimentalGameplayEv
    void getFullStackAccess()const; // _ZNK19ResourcePackManager18getFullStackAccessEv
    void removePack(ResourcePack *); // _ZN19ResourcePackManager10removePackEP12ResourcePack
    void getFullStack()const; // _ZNK19ResourcePackManager12getFullStackEv
    void getFullStack(); // _ZN19ResourcePackManager12getFullStackEv
};
