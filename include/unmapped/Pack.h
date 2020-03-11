#pragma once

#include "./SubpackInfoCollection.h"
#include "../bedrock/pack/PackManifest.h"
#include "./PackSourceReport.h"
#include "./PackManifestFactory.h"
#include <memory>
#include "./ResourceLocation.h"
#include "./Pack.h"
#include "./IContentKeyProvider.h"
#include "./PackMetadata.h"
#include "./ContentTierInfo.h"
#include "./PackReport.h"
#include <functional>
#include "../bedrock/pack/PackAccessStrategy.h"


class Pack {

public:
    static std::string EDUCATION_METADATA_FILE;


    Pack(std::unique_ptr<PackManifest, std::default_delete<PackManifest>>, std::unique_ptr<PackAccessStrategy, std::default_delete<PackAccessStrategy>>, std::unique_ptr<SubpackInfoCollection, std::default_delete<SubpackInfoCollection>>, std::unique_ptr<PackMetadata, std::default_delete<PackMetadata>>);
    void _loadLocalizationFiles();
    ~Pack();
    void move(Pack &&);
    void getAccessStrategy();
    void getManifest()const;
    void getManifest();
    void getManifestPtr()const;
    void getManifestPtr();
    void getMetadata()const;
    void getMetadata();
//  void registerPackUpdatedCallback(void *, std::function<void (Pack &)>); //TODO: incomplete function definition
//  void unregisterPackUpdatedCallback(void *); //TODO: incomplete function definition
//  void registerPackDeletedCallback(void *, std::function<void (Pack &)>); //TODO: incomplete function definition
//  void unregisterPackDeletedCallback(void *); //TODO: incomplete function definition
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
//  void createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory &, IContentKeyProvider const&, PackSourceReport *); //TODO: incomplete function definition
//  void createPackMetadata(PackType, PackManifest &, PackAccessStrategy const&, PackReport &); //TODO: incomplete function definition
};
