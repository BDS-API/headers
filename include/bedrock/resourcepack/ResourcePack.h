#pragma once

#include "../../unmapped/BehaviorPackContents.h"
#include "../../core/Path.h"
#include "./ResourcePackContents.h"
#include "../../unmapped/Pack.h"
#include "../../unmapped/SubpackInfo.h"
#include <functional>
#include <string>


class ResourcePack {

public:
    static std::string RESOURCE_PACK_ICON_PATH;
    static std::string RESOURCE_PACK_BUG_ICON_PATH;
    static std::string TEXTURES_LIST_PATH;


    ResourcePack(Pack &);
    void _generateIconPath();
    void _createSubpacks();
    ~ResourcePack();
    void getPackId()const;
    void getVersion()const;
    bool isBaseGamePack()const;
    bool isSlicePack()const;
    void getPack()const;
//  bool isType(PackType)const; //TODO: incomplete function definition
    bool isTrusted()const;
    void getResource(Core::Path const&, std::string &, int)const;
    void _isValidSubpackIndex(int)const;
    bool hasResource(Core::Path const&, int)const;
//  bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void setLocale(std::string const&);
    bool hasExtraResourcesForLocale(std::string const&, int)const;
    bool isZipped()const;
    void getPackCategory()const;
    void getPackOrigin()const;
    void getResourceLocation()const;
    std::string getFolderName()const;
    bool isHidden()const;
    void getManifest()const;
    void getPackMetadata()const;
    void areKnownFilesValid();
//  void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, int, bool)const; //TODO: incomplete function definition
    void generateAssetSet();
//  void unregisterDeleteCallback(void *); //TODO: incomplete function definition
    void generateWorldPackHistoryInfo()const;
    void _createSubpack(SubpackInfo const&);
    void setError();
    bool hasError()const;
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition
    void getIconFileSytem()const;
    std::string getIconZipPath()const;
    void gatherResourcePackTelemetry()const;
    void _gatherResourcePackTelemetry(ResourcePackContents &)const;
    void gatherBehaviorPackTelemetry()const;
    void _gatherBehaviorPackTelemetry(BehaviorPackContents &)const;
    void generateTextureList();
    void getTexturesList(int)const;
    void getSubpackIndex(std::string const&)const;
    std::string getSubpackName(int)const;
    std::string getSubpackFolderName(int)const;
    void getSubpackCount()const;
    void getSubpackInfoStack()const;
    void setLoadTime(double);
    void getLoadTime()const;
    void onLoadingFinished();
    void setAsBaseGamePack();
    void setAsSlicePack();
};
