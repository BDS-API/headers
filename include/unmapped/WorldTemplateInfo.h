#pragma once

#include "../bedrock/pack/WorldTemplatePackManifest"
#include "../bedrock/pack/WorldTemplatePackSource"
#include "../core/Path"


class WorldTemplateInfo {

public:

    WorldTemplateInfo(WorldTemplatePackManifest const&);
    void getPackManifest()const;
    bool isPremium()const;
    bool isVirtualCatalogItem()const;
    bool isPremiumLocked(IEntitlementManager &)const;
    void getWorldSize()const;
    void setWorldIconOverride(Core::Path const&);
    bool isWorldIconOverridden()const;
    void addWorldTemplatePackSource(WorldTemplatePackSource &);
    void forEachPackInPackSources(std::function<void ()(Pack const&)>)const;
    void loadPacks(PackManifestFactory &, IContentKeyProvider const&);
};
