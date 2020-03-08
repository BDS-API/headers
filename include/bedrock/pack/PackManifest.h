#pragma once

#include "../../unmapped/PackIdVersion"
#include "../../unmapped/BaseGameVersion"
#include "../../unmapped/SemVersion"
#include "../../unmapped/ResourceMetadata"
#include "../../unmapped/ResourceInformation"
#include "../../unmapped/LegacyPackIdVersion"
#include "../../unmapped/ContentIdentity"
#include "../../json/Value"
#include "../../unmapped/ResourceLocation"


class PackManifest {

public:
    static long MarioPackId[abi:cxx11];
    static long STRING_TO_PACK_SCOPE[abi:cxx11];

    virtual PackManifest::~PackManifest();
    virtual void clone(void)const;

    PackManifest(ManifestType);
    void getLocation(void)const;
    void setLocation(ResourceLocation const&);
    void setDescription(std::string const&);
    void setName(std::string const&);
    bool isUsingPackNameKeyword(void)const;
    bool isUsingPackDescriptionKeyword(void)const;
    void getMetaData(void)const;
    void setMetadata(ResourceMetadata const&);
    bool hasExpired(void)const;
    void setExpired(bool);
    void getPackType(void)const;
    void setPackType(PackType);
    bool hasPlugins(void)const;
    void setHasPlugins(bool);
    bool hasClientData(void)const;
    void setHasClientData(bool);
    bool hasEducationMetadata(void)const;
    void setHasEducationMetadata(bool);
    void getPackCategory(void)const;
    void setPackCategory(PackCategory);
    void addPackCapability(gsl::basic_string_span<char const, -1l>);
    bool hasPackCapability(gsl::basic_string_span<char const, -1l>)const;
    void setPackCapabilitiesTrusted(void);
    void StringToPackScope(std::string const&);
    void getPackOrigin(void)const;
    void setPackOrigin(PackOrigin);
    void getPackSettings(void)const;
    void setPackSettings(Json::Value const&);
    void getIdentity(void)const;
    void setIdentity(PackIdVersion const&);
    void getMinEngineVersion(void)const;
    void setMinEngineVersion(SemVersion const&);
    void getRequiredBaseGameVersion(void)const;
    void getFormatVersion(void)const;
    bool isPremium(void)const;
    void setRequiredBaseGameVersion(BaseGameVersion const&);
    bool isHidden(void)const;
    void setHidden(bool);
    bool isPremiumLocked(IEntitlementManager &)const;
    bool isRestrictedPack(void)const;
    void getManifestOrigin(void)const;
    void setManifestOrigin(ManifestOrigin const&);
    void getManifestType(void)const;
    void setManifestType(ManifestType const&);
    void getPackIconLocation(void)const;
    void setPackIconLocation(ResourceLocation const&);
    bool hasModule(PackIdVersion const&)const;
    bool hasModuleType(ResourceInformation::ResourceType)const;
    void addModule(ResourceInformation const&);
    void getModules(void)const;
    void clearModules(void);
    void getDependentPackIdentities(void)const;
    void addPackDependency(PackIdVersion const&);
    void clearPackDependencies(void);
    void addLegacyModuleDependency(LegacyPackIdVersion const&);
    void getLegacyModuleDependencies(void)const;
    bool hasLegacyModuleDependencies(void)const;
    void clearLegacyModuleDependencies(void);
    void getPackSize(void)const;
    void setPackSize(unsigned long);
    bool hasValidUUID(void)const;
    void setInvalidUUID(void);
    bool isPlatformLocked(void)const;
    void setPlatformLocked(bool);
    bool isTitleLocked(void)const;
    void setTitleLocked(bool);
    void getOptionLockedState(void)const;
    void setOptionLockedState(TemplateLockState);
    void getPackScope(void)const;
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
    void getOriginalFormatVersion(void)const;
    void setOriginalFormatVersion(PackManifestFormat);
    void getFileSystemFromOrigin(void)const;
    void getContentIdentity(void)const;
    void setContentIdentity(ContentIdentity const&);
    void setLanguageCodesForPackKeywords(std::vector<std::string, std::allocator<std::string>>);
    void setLocalizedNameKeywords(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    void setCanBeRedownloaded(bool);
    bool canBeRedownloaded(void)const;
    void getSourceIdentity(void)const;
    void setSourceIdentity(ContentIdentity const&);
    PackManifest(PackManifest const&);
};
