#pragma once

#include "../bedrock/pack/PackAccessStrategy.h"
#include "PackManifestFactory.h"
#include "../bedrock/pack/PackManifest.h"
#include "ContentTierInfo.h"
#include "PackSourceReport.h"
#include "IContentKeyProvider.h"
#include <string>
#include "PackReport.h"
#include "SubpackInfoCollection.h"
#include <functional>
#include <memory>
#include "ResourceLocation.h"
#include "PackMetadata.h"


class Pack {

public:
    static std::string EDUCATION_METADATA_FILE;

    void unregisterPackDeletedCallback(void *);
    void getManifestPtr();
    void getMetadata()const;
    void getAccessStrategy()const;
    void getSubpackInfoStack()const;
    void _validSignature()const;
    Pack(std::unique_ptr<PackManifest>, std::unique_ptr<PackAccessStrategy>, std::unique_ptr<SubpackInfoCollection>, std::unique_ptr<PackMetadata>);
//  void createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory &, IContentKeyProvider const&, PackSourceReport *); //TODO: incomplete function definition
    void unregisterPackUpdatedCallback(void *);
    bool isTrusted()const;
    void generateWorldPackHistoryInfo()const;
    void registerPackDeletedCallback(void *, std::function<void (Pack &)>);
    void getManifestPtr()const;
    ~Pack();
    void _loadLocalizationFiles();
    void getMetadata();
//  void createPackMetadata(PackType, PackManifest &, PackAccessStrategy const&, PackReport &); //TODO: incomplete function definition
    void getManifest();
    bool isCompatiblePack(ContentTierInfo const&)const;
    void move(Pack &&);
    bool hasSubpacks()const;
    void getAccessStrategy();
    void notifyUpdated();
    void registerPackUpdatedCallback(void *, std::function<void (Pack &)>);
    bool isSignedProperly();
    void getManifest()const;
    void notifyDeleted();
    void getSubpackInfoStack();
};
