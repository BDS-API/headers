#pragma once

class PackInstance {

public:

    void PackInstance(PackInstance const&);
    void PackInstance(PackInstance&&);
    void PackInstance(ResourcePack *, int, bool, PackSettings *);
    void PackInstance(PackInstance const&, bool, PackSettings *);
    void PackInstance(ResourcePack *, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, PackSettings *);
    void getPackId(void)const;
    void getVersion(void)const;
    void getResource(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    bool hasResource(Core::Path const&)const;
    bool hasExtraResourcesForLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void setLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getManifest(void)const;
    void getPackSettings(void);
    void getPackSettings(void)const;
    bool hasIcon(PackIconType)const;
    void getIconFileSytem(void)const;
    bool isBaseGamePack(void)const;
    bool isSlicePack(void)const;
    bool isType(PackType)const;
    bool isTrusted(void)const;
    void getResourceLocation(void)const;
    bool isZipped(void)const;
    void areKnownFilesValid(void)const;
    void getPackCategory(void)const;
    void getPackOrigin(void)const;
    void forEachIn(Core::Path const&, std::function<void ()(Core::Path const&)>, bool)const;
    void setError(void);
    void getTexturesList(void)const;
    bool isCompatibleSubpack(ContentTierInfo const&)const;
    bool isCompatiblePack(ContentTierInfo const&)const;
    void setToDefaultSubpack(ContentTierInfo const&);
    void getTierInfo(void)const;
    void getLoadTime(void)const;
    void onLoadingFinished(void);
    void generateAssetSet(void);
    void generateWorldPackHistoryInfo(void)const;
    void getPackStats(void);
    void getPackStats(void)const;
};
