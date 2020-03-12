#pragma once

#include "../bedrock/resourcepack/ResourcePack.h"
#include "ContentTierInfo.h"
#include <string>
#include "../core/Path.h"
#include <functional>
#include "PackSettings.h"


class PackInstance {

public:
    bool hasResource(Core::Path const&)const;
    void getPackSettings()const;
    void onLoadingFinished();
    void getManifest()const;
    void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    void getPackStats();
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition
    std::string getFolderName()const;
    void getPackSettings();
//  bool isType(PackType)const; //TODO: incomplete function definition
    std::string getSubpackName()const;
    void getPackCategory()const;
    PackInstance(PackInstance const&, bool, PackSettings *);
    void getPackStats()const;
    void areKnownFilesValid()const;
    bool isTrusted()const;
    PackInstance(ResourcePack *, std::string const&, bool, PackSettings *);
    void generateAssetSet();
    void generateWorldPackHistoryInfo()const;
    std::string getSubpackFolderName()const;
    PackInstance(ResourcePack *, int, bool, PackSettings *);
    PackInstance(PackInstance const&);
    void getLoadTime()const;
    void getIconFileSytem()const;
    bool isBaseGamePack()const;
    void operator==(PackInstance const&)const;
    void getPackId()const;
    bool isCompatibleSubpack(ContentTierInfo const&)const;
    void setToDefaultSubpack(ContentTierInfo const&);
    bool isZipped()const;
    void getPackOrigin()const;
    bool isCompatiblePack(ContentTierInfo const&)const;
    void operator==(ResourcePack const*)const;
    void getResourceLocation()const;
    void getTierInfo()const;
    void getResource(Core::Path const&, std::string &)const;
    ~PackInstance();
    void setError();
    std::string getIconZipPath()const;
    void getTexturesList()const;
    void operator==(ResourcePack const&)const;
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition
    PackInstance(PackInstance &&);
    bool hasExtraResourcesForLocale(std::string const&)const;
    bool isSlicePack()const;
    void getVersion()const;
    void setLocale(std::string const&);
};
