#pragma once

#include <memory>
#include <vector>
#include <string>
#include <functional>
#include "ResourceLoader.h"


class ResourcePackManager : ResourceLoader {

public:
//  virtual bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string> const&)const;
    virtual std::string getPathContainingResource(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string> const&)const;
    ~ResourcePackManager();
    virtual void load(ResourceLocation const&, std::string &)const;
    virtual std::string getPath(ResourceLocation const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual void load(ResourceLocation const&, std::string &, std::vector<std::string> const&)const;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string>)const;
    void getFullStack()const;
    void loadText(ResourceLocation const&, std::string &)const;
    void _notifyFullStackInvalid();
    void onBaseGamePackDownloadComplete();
    void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
    void unRegisterAllResourcePackListener();
    void getResourcesOfGroup(std::string const&)const;
    void _shouldRebuildStack()const;
    void getResourcesOfGroup(PackInstance const&, std::string const&)const;
    void getPackIndexForResource(ResourceLocation const&, std::vector<std::string> const&)const;
    void clearPackReports();
    void registerResourcePackListener(ResourcePackListener &);
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&, std::vector<PackInstance> const&)const; //TODO: incomplete function definition
    void getIncompatiblePacks()const;
    void composeFullStack(ResourcePackStack &, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&)const;
    bool isExperimentalGameplay()const;
    void removeUnsupportedPacks();
    void getFullStackMinEngineVersion()const;
    void setExperimentalGameplay(bool);
    void onLanguageChanged();
    void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>> &)const;
    void checkHasExtraLocaleResources(std::string const&)const;
    void getFullStackAccess()const;
    void findInPacks(ResourceLocation const&);
//  void setStack(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool); //TODO: incomplete function definition
    bool hasResource(ResourceLocation const&, std::vector<std::string> const&)const;
    void unRegisterResourcePackListener(ResourcePackListener &);
    bool isOnlyBaseGamePacks()const;
    void handlePendingStackChanges();
    bool canSupportPacks();
    void _calculateMinEngineVersionFromFullStack();
    bool hasTexture(ResourceLocation const&)const;
    void removePack(ResourcePack *);
    void setCanUseGlobalPackStack(bool);
    void _getResource(Core::Path const&, std::string &)const;
    void getPackSettings(PackIdVersion const&);
    void setPackSourceReport(PackSourceReport &&);
//  ResourcePackManager(std::function<Core::PathBuffer<std::string> (void)>, ContentTierManager const&, bool); //TODO: incomplete function definition
    void onLoadingFinished();
    bool hasResource(ResourceLocation const&)const;
    void _composeFullStack();
    void getStackSize()const;
    void findAllTexturesInUse()const;
    void _handleComposeStack(bool);
//  void getStack(ResourcePackStackType)const; //TODO: incomplete function definition
    void forceStackCompose();
    void ensureSupportedSubpacks();
    void _updateLanguageSubpacks();
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&)const; //TODO: incomplete function definition
    void _getPackForResource(Core::Path const&)const;
    void getPackSourceReport()const;
    void notifyActiveResourcePackChanged();
    void mergePackReports(std::vector<PackReport> &);
    void getFullStack();
//  void clearStack(ResourcePackStackType, bool); //TODO: incomplete function definition
    void notifyLanguageSubpacksChanged();
};
