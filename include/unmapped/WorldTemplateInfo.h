#pragma once

#include "../core/Path.h"
#include "./PackManifestFactory.h"
#include "../bedrock/pack/WorldTemplatePackManifest.h"
#include "./Pack.h"
#include "./IContentKeyProvider.h"
#include <functional>
#include "../bedrock/pack/WorldTemplatePackSource.h"
#include <string>


class WorldTemplateInfo {

public:

    WorldTemplateInfo(WorldTemplatePackManifest const&);
    ~WorldTemplateInfo();
    std::string getWorldName()const;
    std::string getDescription()const;
    std::string getAuthors()const;
    std::string getVersion()const;
    std::string getWorldPath()const;
    void getPackManifest()const;
    bool isPremium()const;
    bool isVirtualCatalogItem()const;
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition
    std::string getGameType()const;
    std::string getWorldIconPath()const;
    void getWorldSize()const;
    void setWorldIconOverride(Core::Path const&);
    bool isWorldIconOverridden()const;
    void addWorldTemplatePackSource(WorldTemplatePackSource &);
//  void forEachPackInPackSources(std::function<void (Pack const&)>)const; //TODO: incomplete function definition
    void loadPacks(PackManifestFactory &, IContentKeyProvider const&);
};
