#pragma once

#include <memory>
#include <functional>


class Pack {

public:
    static std::string EDUCATION_METADATA_FILE;

    void getManifest();
    void getManifest()const;
    void move(Pack &&);
    void getMetadata()const;
    void getManifestPtr()const;
    void _validSignature()const;
    void getAccessStrategy()const;
    void _loadLocalizationFiles();
    ~Pack();
    void getSubpackInfoStack();
    void registerPackUpdatedCallback(void *, std::function<void (Pack &)>);
    void generateWorldPackHistoryInfo()const;
    void notifyUpdated();
    void getSubpackInfoStack()const;
    bool isCompatiblePack(ContentTierInfo const&)const;
//  void createPackMetadata(PackType, PackManifest &, PackAccessStrategy const&, PackReport &); //TODO: incomplete function definition
    bool hasSubpacks()const;
    void unregisterPackDeletedCallback(void *);
    bool isTrusted()const;
    bool isSignedProperly();
    Pack(std::unique_ptr<PackManifest>, std::unique_ptr<PackAccessStrategy>, std::unique_ptr<SubpackInfoCollection>, std::unique_ptr<PackMetadata>);
    void registerPackDeletedCallback(void *, std::function<void (Pack &)>);
    void getManifestPtr();
    void getAccessStrategy();
    void unregisterPackUpdatedCallback(void *);
    void getMetadata();
    void notifyDeleted();
//  void createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory &, IContentKeyProvider const&, PackSourceReport *); //TODO: incomplete function definition
};
