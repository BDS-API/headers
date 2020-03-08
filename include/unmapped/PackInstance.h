#pragma once

#include "../bedrock/resourcepack/ResourcePack"
#include "../core/Path"


class PackInstance {

public:

    PackInstance(PackInstance const&);
    PackInstance(PackInstance&&);
    PackInstance(ResourcePack *, int, bool, PackSettings *);
    PackInstance(PackInstance const&, bool, PackSettings *);
    PackInstance(ResourcePack *, std::string const&, bool, PackSettings *);
    void getPackId()const;
    void getVersion()const;
    void getResource(Core::Path const&, std::string &)const;
    bool hasResource(Core::Path const&)const;
    bool hasExtraResourcesForLocale(std::string const&)const;
    void setLocale(std::string const&);
    void getManifest()const;
    void getPackSettings();
    void getPackSettings()const;
    bool hasIcon(PackIconType)const;
    void getIconFileSytem()const;
    bool isBaseGamePack()const;
    bool isSlicePack()const;
    bool isType(PackType)const;
    bool isTrusted()const;
    void getResourceLocation()const;
    bool isZipped()const;
    void areKnownFilesValid()const;
    void getPackCategory()const;
    void getPackOrigin()const;
    void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    void setError();
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
