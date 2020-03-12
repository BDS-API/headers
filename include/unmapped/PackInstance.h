#pragma once

#include <string>
#include <functional>


class PackInstance {

public:
    void areKnownFilesValid()const;
    bool isBaseGamePack()const;
    void operator==(PackInstance const&)const;
    PackInstance(ResourcePack *, std::string const&, bool, PackSettings *);
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition
    void operator==(ResourcePack const*)const;
    std::string getFolderName()const;
    bool hasExtraResourcesForLocale(std::string const&)const;
    void getPackId()const;
    void getIconFileSytem()const;
    void getResourceLocation()const;
    void generateAssetSet();
    void getResource(Core::Path const&, std::string &)const;
    void setLocale(std::string const&);
    void setError();
    void operator==(ResourcePack const&)const;
    std::string getIconZipPath()const;
    void getVersion()const;
    void onLoadingFinished();
    void getPackStats()const;
    std::string getSubpackName()const;
    PackInstance(PackInstance &&);
    std::string getSubpackFolderName()const;
    bool isTrusted()const;
    bool isSlicePack()const;
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition
    PackInstance(PackInstance const&);
    bool isZipped()const;
//  bool isType(PackType)const; //TODO: incomplete function definition
    bool isCompatiblePack(ContentTierInfo const&)const;
    void getPackSettings();
    void generateWorldPackHistoryInfo()const;
    ~PackInstance();
    bool isCompatibleSubpack(ContentTierInfo const&)const;
    void getLoadTime()const;
    PackInstance(PackInstance const&, bool, PackSettings *);
    void getManifest()const;
    bool hasResource(Core::Path const&)const;
    void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const;
    void getPackOrigin()const;
    void setToDefaultSubpack(ContentTierInfo const&);
    void getPackStats();
    void getPackCategory()const;
    void getTexturesList()const;
    PackInstance(ResourcePack *, int, bool, PackSettings *);
    void getPackSettings()const;
    void getTierInfo()const;
};
