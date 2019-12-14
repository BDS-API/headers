#pragma once

class ResourcePack {

public:

    void ResourcePack(Pack &);
    void _generateIconPath(void);
    void _createSubpacks(void);
    void getPackId(void)const;
    void getVersion(void)const;
    bool isBaseGamePack(void)const;
    bool isSlicePack(void)const;
    void getPack(void)const;
    bool isType(PackType)const;
    bool isTrusted(void)const;
    void getResource(Core::Path const&, std::string &, int)const;
    void _isValidSubpackIndex(int)const;
    bool hasResource(Core::Path const&, int)const;
    bool hasCapability(gsl::basic_string_span<char const, -1l>)const;
    void setLocale(std::string const&);
    bool hasExtraResourcesForLocale(std::string const&, int)const;
    bool isZipped(void)const;
    void getPackCategory(void)const;
    void getPackOrigin(void)const;
    void getResourceLocation(void)const;
    bool isHidden(void)const;
    void getManifest(void)const;
    void getPackMetadata(void)const;
    void areKnownFilesValid(void);
    void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, int, bool)const;
    void generateAssetSet(void);
    void unregisterDeleteCallback(void *);
    void generateWorldPackHistoryInfo(void)const;
    void _createSubpack(SubpackInfo const&);
    void setError(void);
    bool hasError(void)const;
    bool hasIcon(PackIconType)const;
    void getIconFileSytem(void)const;
    void gatherResourcePackTelemetry(void)const;
    void _gatherResourcePackTelemetry(ResourcePackContents &)const;
    void gatherBehaviorPackTelemetry(void)const;
    void _gatherBehaviorPackTelemetry(BehaviorPackContents &)const;
    void generateTextureList(void);
    void getTexturesList(int)const;
    void getSubpackIndex(std::string const&)const;
    void getSubpackCount(void)const;
    void getSubpackInfoStack(void)const;
    void setLoadTime(double);
    void getLoadTime(void)const;
    void onLoadingFinished(void);
    void setAsBaseGamePack(void);
    void setAsSlicePack(void);
};
