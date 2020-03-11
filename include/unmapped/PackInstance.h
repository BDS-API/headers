#pragma once

#include "../core/Path.h"
#include "./PackInstance.h"
#include "../bedrock/resourcepack/ResourcePack.h"
#include "./PackSettings.h"
#include "./ContentTierInfo.h"
#include <functional>
#include <string>


class PackInstance {

public:

    ~PackInstance();
    PackInstance(PackInstance const&);
    PackInstance(PackInstance &&);
    PackInstance(ResourcePack *, int, bool, PackSettings *);
    PackInstance(PackInstance const&, bool, PackSettings *);
    PackInstance(ResourcePack *, std::string const&, bool, PackSettings *);
    void operator==(PackInstance const&)const;
    void operator==(ResourcePack const&)const;
    void operator==(ResourcePack const*)const;
    void getPackId()const;
    void getVersion()const;
    void getResource(Core::Path const&, std::string &)const;
    bool hasResource(Core::Path const&)const;
    bool hasExtraResourcesForLocale(std::string const&)const;
    void setLocale(std::string const&);
    void getManifest()const;
    void getPackSettings();
    void getPackSettings()const;
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition
    void getIconFileSytem()const;
    std::string getIconZipPath()const;
    bool isBaseGamePack()const;
    bool isSlicePack()const;
//  bool isType(PackType)const; //TODO: incomplete function definition
    bool isTrusted()const;
    void getResourceLocation()const;
    std::string getFolderName()const;
    bool isZipped()const;
    void areKnownFilesValid()const;
    void getPackCategory()const;
    void getPackOrigin()const;
//  void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const; //TODO: incomplete function definition
    void setError();
    std::string getSubpackName()const;
    std::string getSubpackFolderName()const;
    void getTexturesList()const;
    bool isCompatibleSubpack(ContentTierInfo const&)const;
    bool isCompatiblePack(ContentTierInfo const&)const;
    void setToDefaultSubpack(ContentTierInfo const&);
    void getTierInfo()const;
    void getLoadTime()const;
    void onLoadingFinished();
    void generateAssetSet();
    void generateWorldPackHistoryInfo()const;
    void getPackStats();
    void getPackStats()const;
};
