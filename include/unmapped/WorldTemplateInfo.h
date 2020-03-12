#pragma once

#include <string>
#include <functional>


class WorldTemplateInfo {

public:
    std::string getWorldName()const;
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition
    ~WorldTemplateInfo();
    void setWorldIconOverride(Core::Path const&);
    bool isPremium()const;
    std::string getWorldPath()const;
    bool isWorldIconOverridden()const;
    std::string getGameType()const;
    void loadPacks(PackManifestFactory &, IContentKeyProvider const&);
    void getWorldSize()const;
    std::string getVersion()const;
    std::string getWorldIconPath()const;
    WorldTemplateInfo(WorldTemplatePackManifest const&);
    void forEachPackInPackSources(std::function<void (Pack const&)>)const;
    std::string getAuthors()const;
    void addWorldTemplatePackSource(WorldTemplatePackSource &);
    bool isVirtualCatalogItem()const;
    std::string getDescription()const;
    void getPackManifest()const;
};
