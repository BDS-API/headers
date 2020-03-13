#pragma once

#include <memory>
#include <functional>


class Pack {

public:
    static std::string EDUCATION_METADATA_FILE;

    Pack(std::unique_ptr<PackManifest>, std::unique_ptr<PackAccessStrategy>, std::unique_ptr<SubpackInfoCollection>, std::unique_ptr<PackMetadata>); // _ZN4PackC2ESt10unique_ptrI12PackManifestSt14default_deleteIS1_EES0_I18PackAccessStrategyS2_IS5_EES0_I21SubpackInfoCollectionS2_IS8_EES0_I12PackMetadataS2_ISB_EE
    void _loadLocalizationFiles(); // _ZN4Pack22_loadLocalizationFilesEv
    ~Pack(); // _ZN4PackD2Ev
    void move(Pack &&); // _ZN4Pack4moveEOS_
    void getAccessStrategy(); // _ZN4Pack17getAccessStrategyEv
    void getManifest()const; // _ZNK4Pack11getManifestEv
    void getManifest(); // _ZN4Pack11getManifestEv
    void getManifestPtr()const; // _ZNK4Pack14getManifestPtrEv
    void getManifestPtr(); // _ZN4Pack14getManifestPtrEv
    void getMetadata()const; // _ZNK4Pack11getMetadataEv
    void getMetadata(); // _ZN4Pack11getMetadataEv
    void registerPackUpdatedCallback(void *, std::function<void (Pack &)>); // _ZN4Pack27registerPackUpdatedCallbackEPvSt8functionIFvRS_EE
    void unregisterPackUpdatedCallback(void *); // _ZN4Pack29unregisterPackUpdatedCallbackEPv
    void registerPackDeletedCallback(void *, std::function<void (Pack &)>); // _ZN4Pack27registerPackDeletedCallbackEPvSt8functionIFvRS_EE
    void unregisterPackDeletedCallback(void *); // _ZN4Pack29unregisterPackDeletedCallbackEPv
    void getAccessStrategy()const; // _ZNK4Pack17getAccessStrategyEv
    void getSubpackInfoStack()const; // _ZNK4Pack19getSubpackInfoStackEv
    void getSubpackInfoStack(); // _ZN4Pack19getSubpackInfoStackEv
    bool isCompatiblePack(ContentTierInfo const&)const; // _ZNK4Pack16isCompatiblePackERK15ContentTierInfo
    bool hasSubpacks()const; // _ZNK4Pack11hasSubpacksEv
    void notifyUpdated(); // _ZN4Pack13notifyUpdatedEv
    void notifyDeleted(); // _ZN4Pack13notifyDeletedEv
    bool isSignedProperly(); // _ZN4Pack16isSignedProperlyEv
    void _validSignature()const; // _ZNK4Pack15_validSignatureEv
    bool isTrusted()const; // _ZNK4Pack9isTrustedEv
    void generateWorldPackHistoryInfo()const; // _ZNK4Pack28generateWorldPackHistoryInfoEv
//  void createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory &, IContentKeyProvider const&, PackSourceReport *); //TODO: incomplete function definition // _ZN4Pack10createPackERK16ResourceLocation8PackType10PackOriginR19PackManifestFactoryRK19IContentKeyProviderP16PackSourceReport
//  void createPackMetadata(PackType, PackManifest &, PackAccessStrategy const&, PackReport &); //TODO: incomplete function definition // _ZN4Pack18createPackMetadataE8PackTypeR12PackManifestRK18PackAccessStrategyR10PackReport
};
