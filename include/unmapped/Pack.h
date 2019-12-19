#pragma once

class Pack {

public:
    static long EDUCATION_METADATA_FILE[abi:cxx11];


    Pack(std::unique_ptr<PackManifest, std::default_delete<PackManifest>>, std::unique_ptr<PackAccessStrategy, std::default_delete<PackAccessStrategy>>, std::unique_ptr<SubpackInfoCollection, std::default_delete<SubpackInfoCollection>>, std::unique_ptr<PackMetadata, std::default_delete<PackMetadata>>);
    void _loadLocalizationFiles(void);
    void move(Pack&&);
    void getAccessStrategy(void);
    void getManifest(void)const;
    void getManifest(void);
    void getManifestPtr(void)const;
    void getManifestPtr(void);
    void getMetadata(void)const;
    void getMetadata(void);
    void registerPackUpdatedCallback(void *, std::function<void ()(Pack&)>);
    void unregisterPackUpdatedCallback(void *);
    void registerPackDeletedCallback(void *, std::function<void ()(Pack&)>);
    void unregisterPackDeletedCallback(void *);
    void getAccessStrategy(void)const;
    void getSubpackInfoStack(void)const;
    void getSubpackInfoStack(void);
    bool isCompatiblePack(ContentTierInfo const&)const;
    bool hasSubpacks(void)const;
    void notifyUpdated(void);
    void notifyDeleted(void);
    bool isSignedProperly(void);
    void _validSignature(void)const;
    bool isTrusted(void)const;
    void generateWorldPackHistoryInfo(void)const;
    void createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory &, IContentKeyProvider const&, PackSourceReport *);
    void createPackMetadata(PackType, PackManifest &, PackAccessStrategy const&, PackReport &);
};
