#pragma once

#include "../../unmapped/PackReport.h"
#include "../../unmapped/PackSourceReport.h"
#include <memory>
#include "../../core/Path.h"
#include "ResourceLoader.h"
#include <string>
#include "../resourcepack/ResourcePack.h"
#include <functional>
#include "../../unmapped/PackIdVersion.h"
#include <vector>
#include "ResourcePackMergeStrategy.h"
#include "../../unmapped/ResourceLocation.h"
#include "../../unmapped/PackSourceFactory.h"
#include "../../unmapped/PackInstance.h"
#include "../resourcepack/ResourcePackStack.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/ContentTierManager.h"
#include "../resourcepack/ResourcePackListener.h"


class ResourcePackManager : ResourceLoader {

public:
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string> const&)const;
    virtual std::string getPath(ResourceLocation const&)const;
    virtual void load(ResourceLocation const&, std::string &, std::vector<std::string> const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    ~ResourcePackManager();
//  virtual bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    virtual void getPath(ResourceLocation const&, std::vector<std::string> const&)const;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string>)const;
    virtual std::string getPathContainingResource(ResourceLocation const&)const;
    virtual void load(ResourceLocation const&, std::string &)const;
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    void getResourcesOfGroup(std::string const&)const;
    void clearPackReports();
//  ResourcePackManager(std::function<Core::PathBuffer<std::string> (void)>, ContentTierManager const&, bool); //TODO: incomplete function definition
    void findAllTexturesInUse()const;
    void notifyActiveResourcePackChanged();
    void loadText(ResourceLocation const&, std::string &)const;
    void setPackSourceReport(PackSourceReport &&);
    void _getPackForResource(Core::Path const&)const;
    void _updateLanguageSubpacks();
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&, std::vector<PackInstance> const&)const; //TODO: incomplete function definition
    void onBaseGamePackDownloadComplete();
    bool isExperimentalGameplay()const;
    void mergePackReports(std::vector<PackReport> &);
    bool hasTexture(ResourceLocation const&)const;
    void _calculateMinEngineVersionFromFullStack();
    void _composeFullStack();
    void onLanguageChanged();
    void onLoadingFinished();
//  void getStack(ResourcePackStackType)const; //TODO: incomplete function definition
    void _getResource(Core::Path const&, std::string &)const;
    void setExperimentalGameplay(bool);
    void unRegisterResourcePackListener(ResourcePackListener &);
    void getFullStack();
    void getIncompatiblePacks()const;
    bool hasResource(ResourceLocation const&)const;
    void getFullStackMinEngineVersion()const;
    void setCanUseGlobalPackStack(bool);
    void registerResourcePackListener(ResourcePackListener &);
    void notifyLanguageSubpacksChanged();
    void getPackIndexForResource(ResourceLocation const&, std::vector<std::string> const&)const;
    void handlePendingStackChanges();
    void _shouldRebuildStack()const;
    void getPackSettings(PackIdVersion const&);
    void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
    void findInPacks(ResourceLocation const&);
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&)const; //TODO: incomplete function definition
    void getFullStack()const;
//  void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>> &)const; //TODO: incomplete function definition
    void getFullStackAccess()const;
    bool hasResource(ResourceLocation const&, std::vector<std::string> const&)const;
    void forceStackCompose();
    void unRegisterAllResourcePackListener();
    bool canSupportPacks();
    void checkHasExtraLocaleResources(std::string const&)const;
    void removeUnsupportedPacks();
    void getResourcesOfGroup(PackInstance const&, std::string const&)const;
    void _handleComposeStack(bool);
    void removePack(ResourcePack *);
    void getPackSourceReport()const;
    void _notifyFullStackInvalid();
//  void setStack(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool); //TODO: incomplete function definition
    void composeFullStack(ResourcePackStack &, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&)const;
//  void clearStack(ResourcePackStackType, bool); //TODO: incomplete function definition
    void ensureSupportedSubpacks();
    void getStackSize()const;
    bool isOnlyBaseGamePacks()const;
};
