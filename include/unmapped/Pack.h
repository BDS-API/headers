#pragma once

#include "../bedrock/pack/PackManifest"
#include "../bedrock/pack/PackAccessStrategy"


class Pack {

public:
    static long EDUCATION_METADATA_FILE[abi:cxx11];


    Pack(std::unique_ptr<PackManifest, std::default_delete<PackManifest>>, std::unique_ptr<PackAccessStrategy, std::default_delete<PackAccessStrategy>>, std::unique_ptr<SubpackInfoCollection, std::default_delete<SubpackInfoCollection>>, std::unique_ptr<PackMetadata, std::default_delete<PackMetadata>>);
    void _loadLocalizationFiles();
    void move(Pack&&);
    void getAccessStrategy();
    void getManifest()const;
    void getManifest();
    void getManifestPtr()const;
    void getManifestPtr();
    void getMetadata()const;
    void getMetadata();
    void registerPackUpdatedCallback(void *, std::function<void ()(Pack&)>);
    void unregisterPackUpdatedCallback(void *);
    void registerPackDeletedCallback(void *, std::function<void ()(Pack&)>);
    void unregisterPackDeletedCallback(void *);
    void getAccessStrategy()const;
    void getSubpackInfoStack()const;
    void getSubpackInfoStack();
    bool isCompatiblePack(ContentTierInfo const&)const;
    bool hasSubpacks()const;
    void notifyUpdated();
    void notifyDeleted();
    bool isSignedProperly();
    void _validSignature()const;
    bool isTrusted()const;
    void generateWorldPackHistoryInfo()const;
    void createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory &, IContentKeyProvider const&, PackSourceReport *);
    void createPackMetadata(PackType, PackManifest &, PackAccessStrategy const&, PackReport &);
};
