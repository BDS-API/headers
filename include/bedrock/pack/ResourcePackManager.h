#pragma once

#include "../../unmapped/ResourceLocation"
#include "../../unmapped/PackSourceFactory"
#include "../../unmapped/ContentTierManager"
#include "../../core/Path"
#include "../../unmapped/IContentKeyProvider"
#include "../../unmapped/PackSourceReport"
#include "../../unmapped/PackManifestFactory"
#include "../../unmapped/PackInstance"
#include "../resourcepack/ResourcePack"
#include "../../unmapped/PackReport"
#include "../resourcepack/ResourcePackListener"
#include "../../unmapped/PackIdVersion"
#include "../resourcepack/ResourcePackStack"


class ResourcePackManager : ResourceLoader {

public:
    virtual ResourcePackManager::~ResourcePackManager()
    virtual void load(ResourceLocation const&, std::string &)const;
    virtual void load(ResourceLocation const&, std::string &, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void getPath(ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void getPathContainingResource(ResourceLocation const&)const;
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
    void getStackSize()const;
    void findAllTexturesInUse()const;
    void findInPacks(ResourceLocation const&);
    void setStack(std::unique_ptr<ResourcePackStack, std::default_delete<ResourcePackStack>>, ResourcePackStackType, bool);
    void _handleComposeStack(bool);
    void clearStack(ResourcePackStackType, bool);
    void clearPackReports();
    void mergePackReports(std::vector<PackReport, std::allocator<PackReport>> &);
    void getStack(ResourcePackStackType)const;
    void _shouldRebuildStack()const;
    void composeFullStack(ResourcePackStack &, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&)const;
    void _composeFullStack();
    void _notifyFullStackInvalid();
    void _calculateMinEngineVersionFromFullStack();
    void notifyActiveResourcePackChanged();
    void _updateLanguageSubpacks();
    void getFullStackMinEngineVersion()const;
    void registerResourcePackListener(ResourcePackListener &);
    void unRegisterResourcePackListener(ResourcePackListener &);
    void unRegisterAllResourcePackListener();
    void notifyLanguageSubpacksChanged();
    void getResourcesOfGroup(PackInstance const&, std::string const&)const;
    void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &)const;
    void getResourcesOfGroup(std::string const&)const;
    bool isOnlyBaseGamePacks()const;
    void checkHasExtraLocaleResources(std::string const&)const;
    void onLanguageChanged();
    void onBaseGamePackDownloadComplete();
    void handlePendingStackChanges();
    void forceStackCompose();
    void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&)const;
    void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&, std::vector<PackInstance, std::allocator<PackInstance>> const&)const;
    void getPackSourceReport()const;
    void setPackSourceReport(PackSourceReport &&);
    void getPackSettings(PackIdVersion const&);
    void ensureSupportedSubpacks();
    bool canSupportPacks();
    void removeUnsupportedPacks();
    void getIncompatiblePacks()const;
    void setCanUseGlobalPackStack(bool);
    void onLoadingFinished();
    void setExperimentalGameplay(bool);
    bool isExperimentalGameplay()const;
    void getFullStackAccess()const;
    void removePack(ResourcePack *);
    void getFullStack()const;
    void getFullStack();
};
