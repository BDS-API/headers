#pragma once

#include <string>
#include <functional>


class WorldTemplateInfo {

public:
    WorldTemplateInfo(WorldTemplatePackManifest const&); // _ZN17WorldTemplateInfoC2ERK25WorldTemplatePackManifest
    ~WorldTemplateInfo(); // _ZN17WorldTemplateInfoD2Ev
    std::string getWorldName()const; // _ZNK17WorldTemplateInfo12getWorldNameB5cxx11Ev
    std::string getDescription()const; // _ZNK17WorldTemplateInfo14getDescriptionB5cxx11Ev
    std::string getAuthors()const; // _ZNK17WorldTemplateInfo10getAuthorsB5cxx11Ev
    std::string getVersion()const; // _ZNK17WorldTemplateInfo10getVersionB5cxx11Ev
    std::string getWorldPath()const; // _ZNK17WorldTemplateInfo12getWorldPathB5cxx11Ev
    void getPackManifest()const; // _ZNK17WorldTemplateInfo15getPackManifestEv
    bool isPremium()const; // _ZNK17WorldTemplateInfo9isPremiumEv
    bool isVirtualCatalogItem()const; // _ZNK17WorldTemplateInfo20isVirtualCatalogItemEv
//  bool isPremiumLocked(IEntitlementManager &)const; //TODO: incomplete function definition // _ZNK17WorldTemplateInfo15isPremiumLockedER19IEntitlementManager
    std::string getGameType()const; // _ZNK17WorldTemplateInfo11getGameTypeB5cxx11Ev
    std::string getWorldIconPath()const; // _ZNK17WorldTemplateInfo16getWorldIconPathB5cxx11Ev
    void getWorldSize()const; // _ZNK17WorldTemplateInfo12getWorldSizeEv
    void setWorldIconOverride(Core::Path const&); // _ZN17WorldTemplateInfo20setWorldIconOverrideERKN4Core4PathE
    bool isWorldIconOverridden()const; // _ZNK17WorldTemplateInfo21isWorldIconOverriddenEv
    void addWorldTemplatePackSource(WorldTemplatePackSource &); // _ZN17WorldTemplateInfo26addWorldTemplatePackSourceER23WorldTemplatePackSource
    void forEachPackInPackSources(std::function<void (Pack const&)>)const; // _ZNK17WorldTemplateInfo24forEachPackInPackSourcesESt8functionIFvRK4PackEE
    void loadPacks(PackManifestFactory &, IContentKeyProvider const&); // _ZN17WorldTemplateInfo9loadPacksER19PackManifestFactoryRK19IContentKeyProvider
};
