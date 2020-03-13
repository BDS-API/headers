#pragma once

#include <string>
#include <unordered_map>
#include <vector>


class PackManifest {

public:
    class CapabilityRegistry;

    static std::string MarioPackId;
    static std::string STRING_TO_PACK_SCOPE;

    ~PackManifest(); // _ZN12PackManifestD2Ev
    virtual void clone()const; // _ZNK12PackManifest5cloneEv
//  PackManifest(ManifestType); //TODO: incomplete function definition // _ZN12PackManifestC2E12ManifestType
    void getLocation()const; // _ZNK12PackManifest11getLocationEv
    void setLocation(ResourceLocation const&); // _ZN12PackManifest11setLocationERK16ResourceLocation
    std::string getDescription()const; // _ZNK12PackManifest14getDescriptionB5cxx11Ev
    std::string getDescriptionRaw()const; // _ZNK12PackManifest17getDescriptionRawB5cxx11Ev
    void setDescription(std::string const&); // _ZN12PackManifest14setDescriptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName()const; // _ZNK12PackManifest7getNameB5cxx11Ev
    std::string getNameRaw()const; // _ZNK12PackManifest10getNameRawB5cxx11Ev
    std::string getNameForTelemetry()const; // _ZNK12PackManifest19getNameForTelemetryB5cxx11Ev
    void setName(std::string const&); // _ZN12PackManifest7setNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isUsingPackNameKeyword()const; // _ZNK12PackManifest22isUsingPackNameKeywordEv
    bool isUsingPackDescriptionKeyword()const; // _ZNK12PackManifest29isUsingPackDescriptionKeywordEv
    void getMetaData()const; // _ZNK12PackManifest11getMetaDataEv
    void setMetadata(ResourceMetadata const&); // _ZN12PackManifest11setMetadataERK16ResourceMetadata
    bool hasExpired()const; // _ZNK12PackManifest10hasExpiredEv
    void setExpired(bool); // _ZN12PackManifest10setExpiredEb
    void getPackType()const; // _ZNK12PackManifest11getPackTypeEv
//  void setPackType(PackType); //TODO: incomplete function definition // _ZN12PackManifest11setPackTypeE8PackType
    bool hasPlugins()const; // _ZNK12PackManifest10hasPluginsEv
    void setHasPlugins(bool); // _ZN12PackManifest13setHasPluginsEb
    bool hasClientData()const; // _ZNK12PackManifest13hasClientDataEv
    void setHasClientData(bool); // _ZN12PackManifest16setHasClientDataEb
    bool hasEducationMetadata()const; // _ZNK12PackManifest20hasEducationMetadataEv
    void setHasEducationMetadata(bool); // _ZN12PackManifest23setHasEducationMetadataEb
    void getPackCategory()const; // _ZNK12PackManifest15getPackCategoryEv
//  void setPackCategory(PackCategory); //TODO: incomplete function definition // _ZN12PackManifest15setPackCategoryE12PackCategory
//  void addPackCapability(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN12PackManifest17addPackCapabilityEN3gsl17basic_string_spanIKcLln1EEE
//  bool hasPackCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK12PackManifest17hasPackCapabilityEN3gsl17basic_string_spanIKcLln1EEE
    void setPackCapabilitiesTrusted(); // _ZN12PackManifest26setPackCapabilitiesTrustedEv
    std::string getCapabilityTypes(); // _ZN12PackManifest18getCapabilityTypesB5cxx11Ev
//  std::string PackScopeToString(PackScope); //TODO: incomplete function definition // _ZN12PackManifest17PackScopeToStringB5cxx11E9PackScope
    void StringToPackScope(std::string const&); // _ZN12PackManifest17StringToPackScopeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPackOrigin()const; // _ZNK12PackManifest13getPackOriginEv
//  void setPackOrigin(PackOrigin); //TODO: incomplete function definition // _ZN12PackManifest13setPackOriginE10PackOrigin
    void getPackSettings()const; // _ZNK12PackManifest15getPackSettingsEv
    void setPackSettings(Json::Value const&); // _ZN12PackManifest15setPackSettingsERKN4Json5ValueE
    void getIdentity()const; // _ZNK12PackManifest11getIdentityEv
    void setIdentity(PackIdVersion const&); // _ZN12PackManifest11setIdentityERK13PackIdVersion
    void getMinEngineVersion()const; // _ZNK12PackManifest19getMinEngineVersionEv
    void setMinEngineVersion(SemVersion const&); // _ZN12PackManifest19setMinEngineVersionERK10SemVersion
    void getRequiredBaseGameVersion()const; // _ZNK12PackManifest26getRequiredBaseGameVersionEv
    void getFormatVersion()const; // _ZNK12PackManifest16getFormatVersionEv
    bool isPremium()const; // _ZNK12PackManifest9isPremiumEv
    void setRequiredBaseGameVersion(BaseGameVersion const&); // _ZN12PackManifest26setRequiredBaseGameVersionERK15BaseGameVersion
    bool isHidden()const; // _ZNK12PackManifest8isHiddenEv
    void setHidden(bool); // _ZN12PackManifest9setHiddenEb
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition // _ZNK12PackManifest15isPremiumLockedER19IEntitlementManager
    bool isRestrictedPack()const; // _ZNK12PackManifest16isRestrictedPackEv
    void getManifestOrigin()const; // _ZNK12PackManifest17getManifestOriginEv
//  void setManifestOrigin(ManifestOrigin const&); //TODO: incomplete function definition // _ZN12PackManifest17setManifestOriginERK14ManifestOrigin
    void getManifestType()const; // _ZNK12PackManifest15getManifestTypeEv
//  void setManifestType(ManifestType const&); //TODO: incomplete function definition // _ZN12PackManifest15setManifestTypeERK12ManifestType
    void getPackIconLocation()const; // _ZNK12PackManifest19getPackIconLocationEv
    void setPackIconLocation(ResourceLocation const&); // _ZN12PackManifest19setPackIconLocationERK16ResourceLocation
    bool hasModule(PackIdVersion const&)const; // _ZNK12PackManifest9hasModuleERK13PackIdVersion
//  bool hasModuleType(ResourceInformation::ResourceType)const; //TODO: incomplete function definition // _ZNK12PackManifest13hasModuleTypeEN19ResourceInformation12ResourceTypeE
    void addModule(ResourceInformation const&); // _ZN12PackManifest9addModuleERK19ResourceInformation
    void getModules()const; // _ZNK12PackManifest10getModulesEv
    void clearModules(); // _ZN12PackManifest12clearModulesEv
    void getDependentPackIdentities()const; // _ZNK12PackManifest26getDependentPackIdentitiesEv
    void addPackDependency(PackIdVersion const&); // _ZN12PackManifest17addPackDependencyERK13PackIdVersion
    void clearPackDependencies(); // _ZN12PackManifest21clearPackDependenciesEv
    void addLegacyModuleDependency(LegacyPackIdVersion const&); // _ZN12PackManifest25addLegacyModuleDependencyERK19LegacyPackIdVersion
    void getLegacyModuleDependencies()const; // _ZNK12PackManifest27getLegacyModuleDependenciesEv
    bool hasLegacyModuleDependencies()const; // _ZNK12PackManifest27hasLegacyModuleDependenciesEv
    void clearLegacyModuleDependencies(); // _ZN12PackManifest29clearLegacyModuleDependenciesEv
    void getPackSize()const; // _ZNK12PackManifest11getPackSizeEv
    void setPackSize(unsigned long); // _ZN12PackManifest11setPackSizeEm
    bool hasValidUUID()const; // _ZNK12PackManifest12hasValidUUIDEv
    void setInvalidUUID(); // _ZN12PackManifest14setInvalidUUIDEv
    bool isPlatformLocked()const; // _ZNK12PackManifest16isPlatformLockedEv
    void setPlatformLocked(bool); // _ZN12PackManifest17setPlatformLockedEb
    bool isTitleLocked()const; // _ZNK12PackManifest13isTitleLockedEv
    void setTitleLocked(bool); // _ZN12PackManifest14setTitleLockedEb
    void getOptionLockedState()const; // _ZNK12PackManifest20getOptionLockedStateEv
//  void setOptionLockedState(TemplateLockState); //TODO: incomplete function definition // _ZN12PackManifest20setOptionLockedStateE17TemplateLockState
    void getPackScope()const; // _ZNK12PackManifest12getPackScopeEv
//  void setPackScope(PackScope); //TODO: incomplete function definition // _ZN12PackManifest12setPackScopeE9PackScope
//  void serialize(PackManifestFormat, Json::Value &)const; //TODO: incomplete function definition // _ZNK12PackManifest9serializeE18PackManifestFormatRN4Json5ValueE
    void _serializeHeader(Json::Value &)const; // _ZNK12PackManifest16_serializeHeaderERN4Json5ValueE
    void _serializeModules(Json::Value &)const; // _ZNK12PackManifest17_serializeModulesERN4Json5ValueE
    void _serializeDependencies(Json::Value &)const; // _ZNK12PackManifest22_serializeDependenciesERN4Json5ValueE
    void _serializeMeta(Json::Value &)const; // _ZNK12PackManifest14_serializeMetaERN4Json5ValueE
    void _serailizeLegacyModuleDependencies(Json::Value &)const; // _ZNK12PackManifest34_serailizeLegacyModuleDependenciesERN4Json5ValueE
    void _serializeVersion(Json::Value &, SemVersion const&)const; // _ZNK12PackManifest17_serializeVersionERN4Json5ValueERK10SemVersion
    std::string getLastModifiedDate()const; // _ZNK12PackManifest19getLastModifiedDateB5cxx11Ev
    void setLastModifiedDate(long); // _ZN12PackManifest19setLastModifiedDateEl
    void setLastModifiedDate(std::string const&); // _ZN12PackManifest19setLastModifiedDateERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void setFormatVersion(PackManifestFormat); //TODO: incomplete function definition // _ZN12PackManifest16setFormatVersionE18PackManifestFormat
    void getOriginalFormatVersion()const; // _ZNK12PackManifest24getOriginalFormatVersionEv
//  void setOriginalFormatVersion(PackManifestFormat); //TODO: incomplete function definition // _ZN12PackManifest24setOriginalFormatVersionE18PackManifestFormat
    std::string generateBaseIconPath()const; // _ZNK12PackManifest20generateBaseIconPathB5cxx11Ev
    void getFileSystemFromOrigin()const; // _ZNK12PackManifest23getFileSystemFromOriginEv
    std::string getZipFolderPath()const; // _ZNK12PackManifest16getZipFolderPathB5cxx11Ev
    std::string generateIconPath()const; // _ZNK12PackManifest16generateIconPathB5cxx11Ev
    void getContentIdentity()const; // _ZNK12PackManifest18getContentIdentityEv
    void setContentIdentity(ContentIdentity const&); // _ZN12PackManifest18setContentIdentityERK15ContentIdentity
    void setLanguageCodesForPackKeywords(std::vector<std::string>); // _ZN12PackManifest31setLanguageCodesForPackKeywordsESt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    std::string getLanguageCodesForPackKeywords()const; // _ZNK12PackManifest31getLanguageCodesForPackKeywordsB5cxx11Ev
    std::string getPackNameLocalization()const; // _ZNK12PackManifest23getPackNameLocalizationB5cxx11Ev
    void setLocalizedNameKeywords(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); // _ZN12PackManifest24setLocalizedNameKeywordsERKSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4hashIS6_ESt8equal_toIS6_ESaISt4pairIKS6_S6_EEE
    void setCanBeRedownloaded(bool); // _ZN12PackManifest20setCanBeRedownloadedEb
    bool canBeRedownloaded()const; // _ZNK12PackManifest17canBeRedownloadedEv
    void getSourceIdentity()const; // _ZNK12PackManifest17getSourceIdentityEv
    void setSourceIdentity(ContentIdentity const&); // _ZN12PackManifest17setSourceIdentityERK15ContentIdentity
    PackManifest(PackManifest const&); // _ZN12PackManifestC2ERKS_
    class CapabilityRegistry {

    public:
        std::string getCapabilities(); // _ZN12PackManifest18CapabilityRegistry15getCapabilitiesB5cxx11Ev
        void _get(); // _ZN12PackManifest18CapabilityRegistry4_getEv
        std::string getTrustedCapabilities(); // _ZN12PackManifest18CapabilityRegistry22getTrustedCapabilitiesB5cxx11Ev
//      void registerCapability(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition // _ZN12PackManifest18CapabilityRegistry18registerCapabilityEN3gsl17basic_string_spanIKcLln1EEEb
        CapabilityRegistry(); // _ZN12PackManifest18CapabilityRegistryC2Ev
        ~CapabilityRegistry(); // _ZN12PackManifest18CapabilityRegistryD2Ev
    };
};
