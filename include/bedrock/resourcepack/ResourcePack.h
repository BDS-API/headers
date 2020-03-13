#pragma once

#include <string>
#include <functional>


class ResourcePack {

public:
    static std::string RESOURCE_PACK_ICON_PATH;
    static std::string RESOURCE_PACK_BUG_ICON_PATH;
    static std::string TEXTURES_LIST_PATH;

    ResourcePack(Pack &); // _ZN12ResourcePackC2ER4Pack
    void _generateIconPath(); // _ZN12ResourcePack17_generateIconPathEv
    void _createSubpacks(); // _ZN12ResourcePack15_createSubpacksEv
    ~ResourcePack(); // _ZN12ResourcePackD2Ev
    void getPackId()const; // _ZNK12ResourcePack9getPackIdEv
    void getVersion()const; // _ZNK12ResourcePack10getVersionEv
    bool isBaseGamePack()const; // _ZNK12ResourcePack14isBaseGamePackEv
    bool isSlicePack()const; // _ZNK12ResourcePack11isSlicePackEv
    void getPack()const; // _ZNK12ResourcePack7getPackEv
//  bool isType(PackType)const; //TODO: incomplete function definition // _ZNK12ResourcePack6isTypeE8PackType
    bool isTrusted()const; // _ZNK12ResourcePack9isTrustedEv
    void getResource(Core::Path const&, std::string &, int)const; // _ZNK12ResourcePack11getResourceERKN4Core4PathERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _isValidSubpackIndex(int)const; // _ZNK12ResourcePack20_isValidSubpackIndexEi
    bool hasResource(Core::Path const&, int)const; // _ZNK12ResourcePack11hasResourceERKN4Core4PathEi
//  bool hasCapability(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK12ResourcePack13hasCapabilityEN3gsl17basic_string_spanIKcLln1EEE
    void setLocale(std::string const&); // _ZN12ResourcePack9setLocaleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasExtraResourcesForLocale(std::string const&, int)const; // _ZNK12ResourcePack26hasExtraResourcesForLocaleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool isZipped()const; // _ZNK12ResourcePack8isZippedEv
    void getPackCategory()const; // _ZNK12ResourcePack15getPackCategoryEv
    void getPackOrigin()const; // _ZNK12ResourcePack13getPackOriginEv
    void getResourceLocation()const; // _ZNK12ResourcePack19getResourceLocationEv
    std::string getFolderName()const; // _ZNK12ResourcePack13getFolderNameB5cxx11Ev
    bool isHidden()const; // _ZNK12ResourcePack8isHiddenEv
    void getManifest()const; // _ZNK12ResourcePack11getManifestEv
    void getPackMetadata()const; // _ZNK12ResourcePack15getPackMetadataEv
    void areKnownFilesValid(); // _ZN12ResourcePack18areKnownFilesValidEv
    void forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, int, bool)const; // _ZNK12ResourcePack9forEachInERKN4Core4PathESt8functionIFvS3_EEib
    void generateAssetSet(); // _ZN12ResourcePack16generateAssetSetEv
    void unregisterDeleteCallback(void *); // _ZN12ResourcePack24unregisterDeleteCallbackEPv
    void generateWorldPackHistoryInfo()const; // _ZNK12ResourcePack28generateWorldPackHistoryInfoEv
    void _createSubpack(SubpackInfo const&); // _ZN12ResourcePack14_createSubpackERK11SubpackInfo
    void setError(); // _ZN12ResourcePack8setErrorEv
    bool hasError()const; // _ZNK12ResourcePack8hasErrorEv
//  bool hasIcon(PackIconType)const; //TODO: incomplete function definition // _ZNK12ResourcePack7hasIconE12PackIconType
//  std::string getIconPath(PackIconType)const; //TODO: incomplete function definition // _ZNK12ResourcePack11getIconPathB5cxx11E12PackIconType
    void getIconFileSytem()const; // _ZNK12ResourcePack16getIconFileSytemEv
    std::string getIconZipPath()const; // _ZNK12ResourcePack14getIconZipPathB5cxx11Ev
    void gatherResourcePackTelemetry()const; // _ZNK12ResourcePack27gatherResourcePackTelemetryEv
    void _gatherResourcePackTelemetry(ResourcePackContents &)const; // _ZNK12ResourcePack28_gatherResourcePackTelemetryER20ResourcePackContents
    void gatherBehaviorPackTelemetry()const; // _ZNK12ResourcePack27gatherBehaviorPackTelemetryEv
    void _gatherBehaviorPackTelemetry(BehaviorPackContents &)const; // _ZNK12ResourcePack28_gatherBehaviorPackTelemetryER20BehaviorPackContents
    void generateTextureList(); // _ZN12ResourcePack19generateTextureListEv
    void getTexturesList(int)const; // _ZNK12ResourcePack15getTexturesListEi
    void getSubpackIndex(std::string const&)const; // _ZNK12ResourcePack15getSubpackIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getSubpackName(int)const; // _ZNK12ResourcePack14getSubpackNameB5cxx11Ei
    std::string getSubpackFolderName(int)const; // _ZNK12ResourcePack20getSubpackFolderNameB5cxx11Ei
    void getSubpackCount()const; // _ZNK12ResourcePack15getSubpackCountEv
    void getSubpackInfoStack()const; // _ZNK12ResourcePack19getSubpackInfoStackEv
    void setLoadTime(double); // _ZN12ResourcePack11setLoadTimeEd
    void getLoadTime()const; // _ZNK12ResourcePack11getLoadTimeEv
    void onLoadingFinished(); // _ZN12ResourcePack17onLoadingFinishedEv
    void setAsBaseGamePack(); // _ZN12ResourcePack17setAsBaseGamePackEv
    void setAsSlicePack(); // _ZN12ResourcePack14setAsSlicePackEv
};
