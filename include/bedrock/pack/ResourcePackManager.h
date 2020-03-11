#pragma once

#include <string>
#include "../../unmapped/PackIdVersion.h"
#include "../resourcepack/ResourcePack.h"
#include <functional>
#include "../resourcepack/ResourcePackListener.h"
#include "../../unmapped/PackInstance.h"
#include "../../unmapped/ContentTierManager.h"
#include "../../unmapped/PackSourceFactory.h"
#include "../../core/Path.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "./ResourcePackMergeStrategy.h"
#include "./ResourceLoader.h"
#include <memory>
#include "../../unmapped/PackSourceReport.h"
#include <vector>
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/ResourceLocation.h"
#include "../resourcepack/ResourcePackStack.h"
#include "../../unmapped/PackReport.h"


class ResourcePackManager : ResourceLoader {

public:
    virtual ~ResourcePackManager();
    virtual void load(ResourceLocation const&, std::string &)const;
    virtual void load(ResourceLocation const&, std::string &, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual std::string getPath(ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual std::string getPathContainingResource(ResourceLocation const&)const;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>>)const;
//  virtual bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition

//  ResourcePackManager(std::function<Core::PathBuffer<std::string> (void)>, ContentTierManager const&, bool); //TODO: incomplete function definition
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
//  void setStack(std::unique_ptr<ResourcePackStack, std::default_delete<ResourcePackStack>>, ResourcePackStackType, bool); //TODO: incomplete function definition
    void _handleComposeStack(bool);
//  void clearStack(ResourcePackStackType, bool); //TODO: incomplete function definition
    void clearPackReports();
    void mergePackReports(std::vector<PackReport, std::allocator<PackReport>> &);
//  void getStack(ResourcePackStackType)const; //TODO: incomplete function definition
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
//  void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &)const; //TODO: incomplete function definition
    void getResourcesOfGroup(std::string const&)const;
    bool isOnlyBaseGamePacks()const;
    void checkHasExtraLocaleResources(std::string const&)const;
    void onLanguageChanged();
    void onBaseGamePackDownloadComplete();
    void handlePendingStackChanges();
    void forceStackCompose();
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&)const; //TODO: incomplete function definition
//  void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory &, IContentKeyProvider const&, std::vector<PackInstance, std::allocator<PackInstance>> const&)const; //TODO: incomplete function definition
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
