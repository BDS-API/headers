#pragma once

#include <string>
#include <unordered_map>
#include <vector>


class PackManifest {

public:
    class CapabilityRegistry;

    static std::string MarioPackId;
    static std::string STRING_TO_PACK_SCOPE;

    ~PackManifest();
    virtual void clone()const;
    std::string getPackNameLocalization()const;
    void setLastModifiedDate(std::string const&);
    void getModules()const;
    std::string getCapabilityTypes();
    bool hasValidUUID()const;
    void setPackIconLocation(ResourceLocation const&);
    bool isTitleLocked()const;
    void getRequiredBaseGameVersion()const;
    std::string getNameForTelemetry()const;
    void setPackCapabilitiesTrusted();
//  void setOptionLockedState(TemplateLockState); //TODO: incomplete function definition
    void getContentIdentity()const;
    void setHasEducationMetadata(bool);
    void setHasClientData(bool);
    bool hasClientData()const;
    bool isPlatformLocked()const;
    void clearLegacyModuleDependencies();
    void _serializeModules(Json::Value &)const;
    void addModule(ResourceInformation const&);
    void setLocation(ResourceLocation const&);
    bool isUsingPackNameKeyword()const;
//  void setPackOrigin(PackOrigin); //TODO: incomplete function definition
    void getPackIconLocation()const;
    void setExpired(bool);
    bool hasPlugins()const;
    std::string getLanguageCodesForPackKeywords()const;
    void _serializeDependencies(Json::Value &)const;
    void addLegacyModuleDependency(LegacyPackIdVersion const&);
//  void serialize(PackManifestFormat, Json::Value &)const; //TODO: incomplete function definition
    void setName(std::string const&);
    std::string getDescriptionRaw()const;
//  std::string PackScopeToString(PackScope); //TODO: incomplete function definition
    bool hasLegacyModuleDependencies()const;
    void setTitleLocked(bool);
    std::string getLastModifiedDate()const;
    void getOptionLockedState()const;
    bool isHidden()const;
    bool hasExpired()const;
    void _serializeHeader(Json::Value &)const;
    void setPackSize(unsigned long);
    void setRequiredBaseGameVersion(BaseGameVersion const&);
    void setMetadata(ResourceMetadata const&);
    void getManifestOrigin()const;
//  void setManifestType(ManifestType const&); //TODO: incomplete function definition
    void setInvalidUUID();
//  void setOriginalFormatVersion(PackManifestFormat); //TODO: incomplete function definition
    PackManifest(PackManifest const&);
//  bool hasPackCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void setLocalizedNameKeywords(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    bool isRestrictedPack()const;
    void getMetaData()const;
    void setPlatformLocked(bool);
    void StringToPackScope(std::string const&);
    void getOriginalFormatVersion()const;
    void _serializeVersion(Json::Value &, SemVersion const&)const;
    bool hasModule(PackIdVersion const&)const;
    void _serializeMeta(Json::Value &)const;
    void setLastModifiedDate(long);
//  PackManifest(ManifestType); //TODO: incomplete function definition
    void getPackCategory()const;
    void getLegacyModuleDependencies()const;
    bool isUsingPackDescriptionKeyword()const;
    void getSourceIdentity()const;
    void setCanBeRedownloaded(bool);
    void setDescription(std::string const&);
    void getFormatVersion()const;
    void getLocation()const;
    void getPackOrigin()const;
    std::string getZipFolderPath()const;
    void getPackSettings()const;
//  void setPackScope(PackScope); //TODO: incomplete function definition
    bool hasEducationMetadata()const;
//  void setManifestOrigin(ManifestOrigin const&); //TODO: incomplete function definition
    std::string generateIconPath()const;
    void setLanguageCodesForPackKeywords(std::vector<std::string>);
    void setSourceIdentity(ContentIdentity const&);
//  void setFormatVersion(PackManifestFormat); //TODO: incomplete function definition
//  void setPackType(PackType); //TODO: incomplete function definition
    void setMinEngineVersion(SemVersion const&);
    void clearModules();
    bool canBeRedownloaded()const;
    std::string generateBaseIconPath()const;
    void setPackSettings(Json::Value const&);
    void getFileSystemFromOrigin()const;
//  bool hasModuleType(ResourceInformation::ResourceType)const; //TODO: incomplete function definition
    void setHidden(bool);
//  void addPackCapability(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string getDescription()const;
    void getIdentity()const;
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition
    void clearPackDependencies();
    void setContentIdentity(ContentIdentity const&);
    void getDependentPackIdentities()const;
    void setHasPlugins(bool);
    void _serailizeLegacyModuleDependencies(Json::Value &)const;
    void getManifestType()const;
    void getPackSize()const;
    void setIdentity(PackIdVersion const&);
    void getMinEngineVersion()const;
    std::string getNameRaw()const;
//  void setPackCategory(PackCategory); //TODO: incomplete function definition
    void getPackType()const;
    std::string getName()const;
    void getPackScope()const;
    void addPackDependency(PackIdVersion const&);
    bool isPremium()const;
    class CapabilityRegistry {

    public:
        std::string getTrustedCapabilities();
//      void registerCapability(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition
        void _get();
        std::string getCapabilities();
        CapabilityRegistry();
        ~CapabilityRegistry();
    };
};
