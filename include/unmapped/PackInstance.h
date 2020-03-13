#pragma once

#include <string>
#include <functional>


class PackInstance {

public:
    ~PackInstance(); // _ZN12PackInstanceD2Ev
    PackInstance(PackInstance const&); // _ZN12PackInstanceC2ERKS_
    PackInstance(PackInstance &&); // _ZN12PackInstanceC2EOS_
    PackInstance(ResourcePack *, int, bool, PackSettings *); // _ZN12PackInstanceC2EP12ResourcePackibP12PackSettings
    PackInstance(PackInstance const&, bool, PackSettings *); // _ZN12PackInstanceC2ERKS_bP12PackSettings
    PackInstance(ResourcePack *, std::string const&, bool, PackSettings *); // _ZN12PackInstanceC2EP12ResourcePackRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbP12PackSettings
    void operator==(PackInstance const&)const; // _ZNK12PackInstanceeqERKS_
    void operator==(ResourcePack const&)const; // _ZNK12PackInstanceeqERK12ResourcePack
    void operator==(ResourcePack const*)const; // _ZNK12PackInstanceeqEPK12ResourcePack
    void getPackId()const; // _ZNK12PackInstance9getPackIdEv
    void getVersion()const; // _ZNK12PackInstance10getVersionEv
    void getResource(Core::Path const&, std::string &)const; // _ZNK12PackInstance11getResourceERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasResource(Core::Path const&)const; // _ZNK12PackInstance11hasResourceERKN4Core4PathE
    bool hasExtraResourcesForLocale(std::string const&)const; // _ZNK12PackInstance26hasExtraResourcesForLocaleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setLocale(std::string const&); // _ZN12PackInstance9setLocaleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getManifest()const; // _ZNK12PackInstance11getManifestEv
    void getPackSettings(); // _ZN12PackInstance15getPackSettingsEv
    void getPackSettings()const; // _ZNK12PackInstance15getPackSettingsEv
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition // _ZNK12PackInstance7hasIconE12PackIconType
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition // _ZNK12PackInstance11getIconPathB5cxx11E12PackIconType
    void getIconFileSytem()const; // _ZNK12PackInstance16getIconFileSytemEv
    std::string getIconZipPath()const; // _ZNK12PackInstance14getIconZipPathB5cxx11Ev
    bool isBaseGamePack()const; // _ZNK12PackInstance14isBaseGamePackEv
    bool isSlicePack()const; // _ZNK12PackInstance11isSlicePackEv
//  bool isType(PackType)const; //TODO: incomplete function definition // _ZNK12PackInstance6isTypeE8PackType
    bool isTrusted()const; // _ZNK12PackInstance9isTrustedEv
    void getResourceLocation()const; // _ZNK12PackInstance19getResourceLocationEv
    std::string getFolderName()const; // _ZNK12PackInstance13getFolderNameB5cxx11Ev
    bool isZipped()const; // _ZNK12PackInstance8isZippedEv
    void areKnownFilesValid()const; // _ZNK12PackInstance18areKnownFilesValidEv
    void getPackCategory()const; // _ZNK12PackInstance15getPackCategoryEv
    void getPackOrigin()const; // _ZNK12PackInstance13getPackOriginEv
    void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool)const; // _ZNK12PackInstance9forEachInERKN4Core4PathESt8functionIFvS3_EEb
    void setError(); // _ZN12PackInstance8setErrorEv
    std::string getSubpackName()const; // _ZNK12PackInstance14getSubpackNameB5cxx11Ev
    std::string getSubpackFolderName()const; // _ZNK12PackInstance20getSubpackFolderNameB5cxx11Ev
    void getTexturesList()const; // _ZNK12PackInstance15getTexturesListEv
    bool isCompatibleSubpack(ContentTierInfo const&)const; // _ZNK12PackInstance19isCompatibleSubpackERK15ContentTierInfo
    bool isCompatiblePack(ContentTierInfo const&)const; // _ZNK12PackInstance16isCompatiblePackERK15ContentTierInfo
    void setToDefaultSubpack(ContentTierInfo const&); // _ZN12PackInstance19setToDefaultSubpackERK15ContentTierInfo
    void getTierInfo()const; // _ZNK12PackInstance11getTierInfoEv
    void getLoadTime()const; // _ZNK12PackInstance11getLoadTimeEv
    void onLoadingFinished(); // _ZN12PackInstance17onLoadingFinishedEv
    void generateAssetSet(); // _ZN12PackInstance16generateAssetSetEv
    void generateWorldPackHistoryInfo()const; // _ZNK12PackInstance28generateWorldPackHistoryInfoEv
    void getPackStats(); // _ZN12PackInstance12getPackStatsEv
    void getPackStats()const; // _ZNK12PackInstance12getPackStatsEv
};
