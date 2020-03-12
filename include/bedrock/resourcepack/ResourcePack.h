#pragma once

#include "../../core/Path.h"
#include <string>
#include "ResourcePackContents.h"
#include <functional>
#include "../../unmapped/SubpackInfo.h"
#include "../../unmapped/Pack.h"
#include "../../unmapped/BehaviorPackContents.h"


class ResourcePack {

public:
    static std::string RESOURCE_PACK_ICON_PATH;
    static std::string RESOURCE_PACK_BUG_ICON_PATH;
    static std::string TEXTURES_LIST_PATH;

    bool isZipped()const;
    bool isHidden()const;
    void getPackMetadata()const;
    bool isSlicePack()const;
    void generateWorldPackHistoryInfo()const;
//  bool isType(PackType)const; //TODO: incomplete function definition
    void getVersion()const;
    void getIconFileSytem()const;
    bool hasResource(Core::Path const&, int)const;
    void _createSubpacks();
    void gatherBehaviorPackTelemetry()const;
    void _gatherBehaviorPackTelemetry(BehaviorPackContents &)const;
    void setError();
    void generateTextureList();
    void getResourceLocation()const;
    std::string getIconZipPath()const;
    std::string getSubpackName(int)const;
    void getLoadTime()const;
    void setLoadTime(double);
    void gatherResourcePackTelemetry()const;
    void setAsBaseGamePack();
    bool isBaseGamePack()const;
    void _generateIconPath();
    void getSubpackIndex(std::string const&)const;
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition
    void getPack()const;
    bool hasExtraResourcesForLocale(std::string const&, int)const;
    void _createSubpack(SubpackInfo const&);
    bool isTrusted()const;
    void setAsSlicePack();
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition
    void getTexturesList(int)const;
    void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, int, bool)const;
    void getResource(Core::Path const&, std::string &, int)const;
//  bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void getManifest()const;
    std::string getFolderName()const;
    void generateAssetSet();
    std::string getSubpackFolderName(int)const;
    void getSubpackInfoStack()const;
    ResourcePack(Pack &);
    void getPackId()const;
    void getSubpackCount()const;
    void getPackCategory()const;
    void _gatherResourcePackTelemetry(ResourcePackContents &)const;
    void onLoadingFinished();
    void setLocale(std::string const&);
    void _isValidSubpackIndex(int)const;
    bool hasError()const;
    void unregisterDeleteCallback(void *);
    void getPackOrigin()const;
    ~ResourcePack();
    void areKnownFilesValid();
};
