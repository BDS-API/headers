#pragma once

#include "../../unmapped/PackIdVersion"
#include "../../unmapped/ResourcePackStack"
#include "../../unmapped/ResourcePack"
#include "../../core/Path"
#include "../../unmapped/PackReport"
#include "../../unmapped/PackSourceReport"
#include "../../unmapped/ResourcePackListener"
#include "../../unmapped/PackInstance"
#include "../../unmapped/ResourceLocation"


class ResourcePackManager : ResourceLoader {

public:
    virtual ResourcePackManager::~ResourcePackManager();
    virtual void load(ResourceLocation const&, std::string &)const;
    virtual void load(ResourceLocation const&, std::string &, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void getPath[abi:cxx11](ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void getPathContainingResource[abi:cxx11](ResourceLocation const&)const;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>>)const;
    virtual bool hasCapability(gsl::basic_string_span<char const, -1l>)const;

    ResourcePackManager(std::function<Core::PathBuffer<std::string> ()(void)>, ContentTierManager const&, bool);
    void _getResource(Core::Path const&, std::string &)const;
    void loadText(ResourceLocation const&, std::string &)const;
    void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
    bool hasTexture(ResourceLocation const&)const;
    bool hasResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    bool hasResource(ResourceLocation const&)const;
    void _getPackForResource(Core::Path const&)const;
    void getPackIndexForResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    void getStackSize(void)const;
    void findAllTexturesInUse(void)const;
    void findInPacks(ResourceLocation const&);
    void setStack(std::unique_ptr<ResourcePackStack, std::default_delete<ResourcePackStack>>, ResourcePackStackType, bool);
    void _handleComposeStack(bool);
    void clearStack(ResourcePackStackType, bool);
    void clearPackReports(void);
    void mergePackReports(std::vector<PackReport, std::allocator<PackReport>> &);
    void getStack(ResourcePackStackType)const;
    void _shouldRebuildStack(void)const;
    void composeFullStack(ResourcePackStack &, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&)const;
    void _composeFullStack(void);
    void _notifyFullStackInvalid(void);
    void _calculateMinEngineVersionFromFullStack(void);
    void notifyActiveResourcePackChanged(void);
    void _updateLanguageSubpacks(void);
    void getFullStackMinEngineVersion(void)const;
    void registerResourcePackListener(ResourcePackListener &);
    void unRegisterResourcePackListener(ResourcePackListener &);
    void unRegisterAllResourcePackListener(void);
    void notifyLanguageSubpacksChanged(void);
    void getResourcesOfGroup(PackInstance const&, std::string const&)const;
    void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &)const;
    void getResourcesOfGroup(std::string const&)const;
    bool isOnlyBaseGamePacks(void)const;
    void checkHasExtraLocaleResources(std::string const&)const;
    void onLanguageChanged(void);
    void onBaseGamePackDownloadComplete(void);
    void handlePendingStackChanges(void);
    void forceStackCompose(void);
    void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&)const;
    void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&, std::vector<PackInstance, std::allocator<PackInstance>> const&)const;
    void getPackSourceReport(void)const;
    void setPackSourceReport(PackSourceReport &&);
    void getPackSettings(PackIdVersion const&);
    void ensureSupportedSubpacks(void);
    bool canSupportPacks(void);
    void removeUnsupportedPacks(void);
    void getIncompatiblePacks(void)const;
    void setCanUseGlobalPackStack(bool);
    void onLoadingFinished(void);
    void setExperimentalGameplay(bool);
    bool isExperimentalGameplay(void)const;
    void getFullStackAccess(void)const;
    void removePack(ResourcePack *);
    void getFullStack(void)const;
    void getFullStack(void);
};
