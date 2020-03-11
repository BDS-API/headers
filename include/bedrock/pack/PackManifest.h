#pragma once

#include <utility>
#include "../../unmapped/ContentIdentity.h"
#include <unordered_map>
#include <string>
#include "../../unmapped/LegacyPackIdVersion.h"
#include "../../unmapped/SemVersion.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/PackIdVersion.h"
#include <memory>
#include "./PackManifest.h"
#include "../../unmapped/ResourceInformation.h"
#include <vector>
#include "../../unmapped/ResourceLocation.h"
#include <functional>
#include "../../unmapped/ResourceMetadata.h"
#include "../../json/Value.h"


class PackManifest {

public:
    static std::string MarioPackId;
    static std::string STRING_TO_PACK_SCOPE;

    virtual ~PackManifest();
    virtual void clone()const;

//  PackManifest(ManifestType); //TODO: incomplete function definition
    void getLocation()const;
    void setLocation(ResourceLocation const&);
    std::string getDescription()const;
    std::string getDescriptionRaw()const;
    void setDescription(std::string const&);
    std::string getName()const;
    std::string getNameRaw()const;
    std::string getNameForTelemetry()const;
    void setName(std::string const&);
    bool isUsingPackNameKeyword()const;
    bool isUsingPackDescriptionKeyword()const;
    void getMetaData()const;
    void setMetadata(ResourceMetadata const&);
    bool hasExpired()const;
    void setExpired(bool);
    void getPackType()const;
//  void setPackType(PackType); //TODO: incomplete function definition
    bool hasPlugins()const;
    void setHasPlugins(bool);
    bool hasClientData()const;
    void setHasClientData(bool);
    bool hasEducationMetadata()const;
    void setHasEducationMetadata(bool);
    void getPackCategory()const;
//  void setPackCategory(PackCategory); //TODO: incomplete function definition
//  void addPackCapability(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  bool hasPackCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void setPackCapabilitiesTrusted();
    std::string getCapabilityTypes();
//  std::string PackScopeToString(PackScope); //TODO: incomplete function definition
    void StringToPackScope(std::string const&);
    void getPackOrigin()const;
//  void setPackOrigin(PackOrigin); //TODO: incomplete function definition
    void getPackSettings()const;
    void setPackSettings(Json::Value const&);
    void getIdentity()const;
    void setIdentity(PackIdVersion const&);
    void getMinEngineVersion()const;
    void setMinEngineVersion(SemVersion const&);
    void getRequiredBaseGameVersion()const;
    void getFormatVersion()const;
    bool isPremium()const;
    void setRequiredBaseGameVersion(BaseGameVersion const&);
    bool isHidden()const;
    void setHidden(bool);
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition
    bool isRestrictedPack()const;
    void getManifestOrigin()const;
//  void setManifestOrigin(ManifestOrigin const&); //TODO: incomplete function definition
    void getManifestType()const;
//  void setManifestType(ManifestType const&); //TODO: incomplete function definition
    void getPackIconLocation()const;
    void setPackIconLocation(ResourceLocation const&);
    bool hasModule(PackIdVersion const&)const;
//  bool hasModuleType(ResourceInformation::ResourceType)const; //TODO: incomplete function definition
    void addModule(ResourceInformation const&);
    void getModules()const;
    void clearModules();
    void getDependentPackIdentities()const;
    void addPackDependency(PackIdVersion const&);
    void clearPackDependencies();
    void addLegacyModuleDependency(LegacyPackIdVersion const&);
    void getLegacyModuleDependencies()const;
    bool hasLegacyModuleDependencies()const;
    void clearLegacyModuleDependencies();
    void getPackSize()const;
    void setPackSize(unsigned long);
    bool hasValidUUID()const;
    void setInvalidUUID();
    bool isPlatformLocked()const;
    void setPlatformLocked(bool);
    bool isTitleLocked()const;
    void setTitleLocked(bool);
    void getOptionLockedState()const;
//  void setOptionLockedState(TemplateLockState); //TODO: incomplete function definition
    void getPackScope()const;
//  void setPackScope(PackScope); //TODO: incomplete function definition
//  void serialize(PackManifestFormat, Json::Value &)const; //TODO: incomplete function definition
    void _serializeHeader(Json::Value &)const;
    void _serializeModules(Json::Value &)const;
    void _serializeDependencies(Json::Value &)const;
    void _serializeMeta(Json::Value &)const;
    void _serailizeLegacyModuleDependencies(Json::Value &)const;
    void _serializeVersion(Json::Value &, SemVersion const&)const;
    std::string getLastModifiedDate()const;
    void setLastModifiedDate(long);
    void setLastModifiedDate(std::string const&);
//  void setFormatVersion(PackManifestFormat); //TODO: incomplete function definition
    void getOriginalFormatVersion()const;
//  void setOriginalFormatVersion(PackManifestFormat); //TODO: incomplete function definition
    std::string generateBaseIconPath()const;
    void getFileSystemFromOrigin()const;
    std::string getZipFolderPath()const;
    std::string generateIconPath()const;
    void getContentIdentity()const;
    void setContentIdentity(ContentIdentity const&);
    void setLanguageCodesForPackKeywords(std::vector<std::string, std::allocator<std::string>>);
    std::string getLanguageCodesForPackKeywords()const;
    std::string getPackNameLocalization()const;
//  void setLocalizedNameKeywords(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); //TODO: incomplete function definition
    void setCanBeRedownloaded(bool);
    bool canBeRedownloaded()const;
    void getSourceIdentity()const;
    void setSourceIdentity(ContentIdentity const&);
    PackManifest(PackManifest const&);
};
