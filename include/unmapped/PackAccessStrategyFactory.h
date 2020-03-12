#pragma once

#include "ResourceLocation.h"
#include "PackReport.h"
#include "IContentKeyProvider.h"
#include "ContentIdentity.h"


namespace PackAccessStrategyFactory {

    void create(ResourceLocation &, IContentKeyProvider const&, PackReport &, bool);
    void createForEncrypted(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void createForEncryptedZip(ResourceLocation const&, IContentKeyProvider const&);
    void createForDirectory(ResourceLocation const&, bool);
    void createForDirectoryWithEncryptedBlob(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
    void createForZip(ResourceLocation const&, bool);
};
