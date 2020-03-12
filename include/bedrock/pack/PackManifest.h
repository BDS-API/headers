#pragma once

#include "../../unmapped/ResourceInformation.h"
#include "../../unmapped/ContentIdentity.h"
#include <string>
#include <unordered_map>
#include "../../json/Value.h"
#include "../../unmapped/LegacyPackIdVersion.h"
#include "../../unmapped/BaseGameVersion.h"
#include <functional>
#include <vector>
#include "../../unmapped/SemVersion.h"
#include <memory>
#include "../../unmapped/ResourceMetadata.h"
#include "../../unmapped/PackIdVersion.h"
#include <utility>
#include "../../unmapped/ResourceLocation.h"


class PackManifest {

public:
    class CapabilityRegistry;

    static std::string MarioPackId;
    static std::string STRING_TO_PACK_SCOPE;

    ~PackManifest();
    virtual void clone()const;
    std::string getName()const;
    std::string getLanguageCodesForPackKeywords()const;
//  bool hasPackCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  std::string PackScopeToString(PackScope); //TODO: incomplete function definition
//  void setManifestType(ManifestType const&); //TODO: incomplete function definition
    void setLastModifiedDate(std::string const&);
    void getDependentPackIdentities()const;
    void _serializeDependencies(Json::Value &)const;
    void getContentIdentity()const;
    void setLocation(ResourceLocation const&);
    void setIdentity(PackIdVersion const&);
    void getOptionLockedState()const;
//  void setOriginalFormatVersion(PackManifestFormat); //TODO: incomplete function definition
    std::string getNameRaw()const;
//  void setPackOrigin(PackOrigin); //TODO: incomplete function definition
    void _serializeVersion(Json::Value &, SemVersion const&)const;
    void getOriginalFormatVersion()const;
    void getFormatVersion()const;
    void setExpired(bool);
//  void setFormatVersion(PackManifestFormat); //TODO: incomplete function definition
    void _serializeModules(Json::Value &)const;
    void setInvalidUUID();
    std::string getLastModifiedDate()const;
    void _serailizeLegacyModuleDependencies(Json::Value &)const;
//  void setOptionLockedState(TemplateLockState); //TODO: incomplete function definition
//  void setPackCategory(PackCategory); //TODO: incomplete function definition
    std::string getDescriptionRaw()const;
    void getIdentity()const;
    void setHasClientData(bool);
    bool hasClientData()const;
    void getManifestOrigin()const;
    void setHasEducationMetadata(bool);
    void clearLegacyModuleDependencies();
    bool isUsingPackDescriptionKeyword()const;
    bool canBeRedownloaded()const;
    void getMetaData()const;
    void getModules()const;
    void addLegacyModuleDependency(LegacyPackIdVersion const&);
//  bool hasModuleType(ResourceInformation::ResourceType)const; //TODO: incomplete function definition
    void setSourceIdentity(ContentIdentity const&);
    void setMetadata(ResourceMetadata const&);
    bool isTitleLocked()const;
    bool hasPlugins()const;
    void getPackCategory()const;
    void setLanguageCodesForPackKeywords(std::vector<std::string>);
    void getLegacyModuleDependencies()const;
    bool isRestrictedPack()const;
    void addPackDependency(PackIdVersion const&);
    void setHasPlugins(bool);
//  void setManifestOrigin(ManifestOrigin const&); //TODO: incomplete function definition
    void setPackIconLocation(ResourceLocation const&);
    void addModule(ResourceInformation const&);
    void StringToPackScope(std::string const&);
//  void setPackScope(PackScope); //TODO: incomplete function definition
//  void addPackCapability(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    PackManifest(PackManifest const&);
    bool isPlatformLocked()const;
    void setContentIdentity(ContentIdentity const&);
    void setLastModifiedDate(long);
    void getManifestType()const;
    void clearPackDependencies();
    void getPackType()const;
    std::string getCapabilityTypes();
    void _serializeMeta(Json::Value &)const;
    void getPackSize()const;
//  void serialize(PackManifestFormat, Json::Value &)const; //TODO: incomplete function definition
    std::string getNameForTelemetry()const;
    void setMinEngineVersion(SemVersion const&);
    void getPackSettings()const;
    bool isHidden()const;
    void setHidden(bool);
    void _serializeHeader(Json::Value &)const;
    void getLocation()const;
    bool hasExpired()const;
//  PackManifest(ManifestType); //TODO: incomplete function definition
    void getPackOrigin()const;
    void setName(std::string const&);
    bool hasValidUUID()const;
    void clearModules();
//  void setLocalizedNameKeywords(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); //TODO: incomplete function definition
    void setPackSize(unsigned long);
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition
    void setTitleLocked(bool);
//  void setPackType(PackType); //TODO: incomplete function definition
    std::string generateBaseIconPath()const;
    std::string getZipFolderPath()const;
    bool hasLegacyModuleDependencies()const;
    void setPackSettings(Json::Value const&);
    bool isUsingPackNameKeyword()const;
    void setRequiredBaseGameVersion(BaseGameVersion const&);
    void getRequiredBaseGameVersion()const;
    void getPackIconLocation()const;
    void setCanBeRedownloaded(bool);
    bool hasModule(PackIdVersion const&)const;
    void getSourceIdentity()const;
    std::string getDescription()const;
    bool hasEducationMetadata()const;
    void getMinEngineVersion()const;
    void getPackScope()const;
    bool isPremium()const;
    void setPackCapabilitiesTrusted();
    std::string generateIconPath()const;
    void getFileSystemFromOrigin()const;
    std::string getPackNameLocalization()const;
    void setPlatformLocked(bool);
    void setDescription(std::string const&);
    class CapabilityRegistry {

    public:
        void _get();
//      void registerCapability(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition
        std::string getCapabilities();
        std::string getTrustedCapabilities();
        ~CapabilityRegistry();
        CapabilityRegistry();
    };
};
