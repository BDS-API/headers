#pragma once

#include "../../unmapped/LegacyPackIdVersion"
#include "../../unmapped/ResourceLocation"
#include "../../unmapped/ResourceInformation"
#include "../../unmapped/BaseGameVersion"
#include "../../json/Value"
#include "../../unmapped/ContentIdentity"
#include "../../unmapped/SemVersion"
#include "../../unmapped/PackIdVersion"
#include "../../unmapped/ResourceMetadata"


class PackManifest {

public:
    static long MarioPackId[abi:cxx11];
    static long STRING_TO_PACK_SCOPE[abi:cxx11];

    virtual PackManifest::~PackManifest()
    virtual void clone()const;

    PackManifest(ManifestType);
    void getLocation()const;
    void setLocation(ResourceLocation const&);
    void setDescription(std::string const&);
    void setName(std::string const&);
    bool isUsingPackNameKeyword()const;
    bool isUsingPackDescriptionKeyword()const;
    void getMetaData()const;
    void setMetadata(ResourceMetadata const&);
    bool hasExpired()const;
    void setExpired(bool);
    void getPackType()const;
    void setPackType(PackType);
    bool hasPlugins()const;
    void setHasPlugins(bool);
    bool hasClientData()const;
    void setHasClientData(bool);
    bool hasEducationMetadata()const;
    void setHasEducationMetadata(bool);
    void getPackCategory()const;
    void setPackCategory(PackCategory);
    void addPackCapability(gsl::basic_string_span<char const, -1l>);
    bool hasPackCapability(gsl::basic_string_span<char const, -1l>)const;
    void setPackCapabilitiesTrusted();
    void StringToPackScope(std::string const&);
    void getPackOrigin()const;
    void setPackOrigin(PackOrigin);
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
    bool isPremiumLocked(IEntitlementManager &)const;
    bool isRestrictedPack()const;
    void getManifestOrigin()const;
    void setManifestOrigin(ManifestOrigin const&);
    void getManifestType()const;
    void setManifestType(ManifestType const&);
    void getPackIconLocation()const;
    void setPackIconLocation(ResourceLocation const&);
    bool hasModule(PackIdVersion const&)const;
    bool hasModuleType(ResourceInformation::ResourceType)const;
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
    void setOptionLockedState(TemplateLockState);
    void getPackScope()const;
    void setPackScope(PackScope);
    void serialize(PackManifestFormat, Json::Value &)const;
    void _serializeHeader(Json::Value &)const;
    void _serializeModules(Json::Value &)const;
    void _serializeDependencies(Json::Value &)const;
    void _serializeMeta(Json::Value &)const;
    void _serailizeLegacyModuleDependencies(Json::Value &)const;
    void _serializeVersion(Json::Value &, SemVersion const&)const;
    void setLastModifiedDate(long);
    void setLastModifiedDate(std::string const&);
    void setFormatVersion(PackManifestFormat);
    void getOriginalFormatVersion()const;
    void setOriginalFormatVersion(PackManifestFormat);
    void getFileSystemFromOrigin()const;
    void getContentIdentity()const;
    void setContentIdentity(ContentIdentity const&);
    void setLanguageCodesForPackKeywords(std::vector<std::string, std::allocator<std::string>>);
    void setLocalizedNameKeywords(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    void setCanBeRedownloaded(bool);
    bool canBeRedownloaded()const;
    void getSourceIdentity()const;
    void setSourceIdentity(ContentIdentity const&);
    PackManifest(PackManifest const&);
};
