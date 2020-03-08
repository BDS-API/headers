#pragma once

#include "../../unmapped/Pack"
#include "../../unmapped/SubpackInfo"
#include "../../unmapped/BehaviorPackContents"
#include "../../core/Path"


class ResourcePack {

public:
    static long RESOURCE_PACK_ICON_PATH[abi:cxx11];
    static long RESOURCE_PACK_BUG_ICON_PATH[abi:cxx11];
    static long TEXTURES_LIST_PATH[abi:cxx11];


    ResourcePack(Pack &);
    void _generateIconPath();
    void _createSubpacks();
    void getPackId()const;
    void getVersion()const;
    bool isBaseGamePack()const;
    bool isSlicePack()const;
    void getPack()const;
    bool isType(PackType)const;
    bool isTrusted()const;
    void getResource(Core::Path const&, std::string &, int)const;
    void _isValidSubpackIndex(int)const;
    bool hasResource(Core::Path const&, int)const;
    bool hasCapability(gsl::basic_string_span<char const, -1l>)const;
    void setLocale(std::string const&);
    bool hasExtraResourcesForLocale(std::string const&, int)const;
    bool isZipped()const;
    void getPackCategory()const;
    void getPackOrigin()const;
    void getResourceLocation()const;
    bool isHidden()const;
    void getManifest()const;
    void getPackMetadata()const;
    void areKnownFilesValid();
    void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, int, bool)const;
    void generateAssetSet();
    void unregisterDeleteCallback(void *);
    void generateWorldPackHistoryInfo()const;
    void _createSubpack(SubpackInfo const&);
    void setError();
    bool hasError()const;
    bool hasIcon(PackIconType)const;
    void getIconFileSytem()const;
    void gatherResourcePackTelemetry()const;
    void _gatherResourcePackTelemetry(ResourcePackContents &)const;
    void gatherBehaviorPackTelemetry()const;
    void _gatherBehaviorPackTelemetry(BehaviorPackContents &)const;
    void generateTextureList();
    void getTexturesList(int)const;
    void getSubpackIndex(std::string const&)const;
    void getSubpackCount()const;
    void getSubpackInfoStack()const;
    void setLoadTime(double);
    void getLoadTime()const;
    void onLoadingFinished();
    void setAsBaseGamePack();
    void setAsSlicePack();
};
