#pragma once

#include "IContentKeyProvider.h"
#include "../bedrock/pack/WorldTemplatePackManifest.h"
#include "../bedrock/pack/WorldTemplatePackSource.h"
#include <functional>
#include "../core/Path.h"
#include "Pack.h"
#include "PackManifestFactory.h"


class WorldTemplateInfo {

public:
    std::string getAuthors()const;
    std::string getDescription()const;
    std::string getWorldName()const;
    void getPackManifest()const;
    bool isWorldIconOverridden()const;
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition
    WorldTemplateInfo(WorldTemplatePackManifest const&);
    bool isPremium()const;
    std::string getWorldIconPath()const;
    std::string getWorldPath()const;
    void setWorldIconOverride(Core::Path const&);
    void getWorldSize()const;
    std::string getGameType()const;
    void loadPacks(PackManifestFactory &, IContentKeyProvider const&);
    bool isVirtualCatalogItem()const;
    std::string getVersion()const;
    void addWorldTemplatePackSource(WorldTemplatePackSource &);
    void forEachPackInPackSources(std::function<void (Pack const&)>)const;
    ~WorldTemplateInfo();
};
