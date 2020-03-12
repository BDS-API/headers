#pragma once

#include <string>
#include <functional>


class ResourcePack {

public:
    static std::string RESOURCE_PACK_ICON_PATH;
    static std::string RESOURCE_PACK_BUG_ICON_PATH;
    static std::string TEXTURES_LIST_PATH;

    void _gatherResourcePackTelemetry(ResourcePackContents &)const;
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition
    std::string getIconZipPath()const;
    bool hasResource(Core::Path const&, int)const;
    void getTexturesList(int)const;
    void _isValidSubpackIndex(int)const;
    void unregisterDeleteCallback(void *);
    void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, int, bool)const;
    void getSubpackInfoStack()const;
    void setLocale(std::string const&);
    void _gatherBehaviorPackTelemetry(BehaviorPackContents &)const;
    void getLoadTime()const;
    bool isZipped()const;
    void generateWorldPackHistoryInfo()const;
    void getIconFileSytem()const;
    bool isBaseGamePack()const;
    void getSubpackIndex(std::string const&)const;
    void areKnownFilesValid();
    std::string getSubpackFolderName(int)const;
    void gatherBehaviorPackTelemetry()const;
    bool hasExtraResourcesForLocale(std::string const&, int)const;
    bool isSlicePack()const;
    void setLoadTime(double);
    void _createSubpacks();
    ~ResourcePack();
    void _generateIconPath();
    void getVersion()const;
    bool isTrusted()const;
    void setAsSlicePack();
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition
    bool isHidden()const;
    void onLoadingFinished();
    void getSubpackCount()const;
    void getPackOrigin()const;
    void getPack()const;
    bool hasError()const;
    void getResourceLocation()const;
    std::string getSubpackName(int)const;
    void generateAssetSet();
    void getPackId()const;
    void _createSubpack(SubpackInfo const&);
    void setError();
    void gatherResourcePackTelemetry()const;
    void getPackCategory()const;
    void setAsBaseGamePack();
    void generateTextureList();
    void getResource(Core::Path const&, std::string &, int)const;
    void getPackMetadata()const;
//  bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void getManifest()const;
    std::string getFolderName()const;
//  bool isType(PackType)const; //TODO: incomplete function definition
    ResourcePack(Pack &);
};
