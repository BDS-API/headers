#pragma once

#include "../../unmapped/IContentKeyProvider"
#include "../../mce/UUID"
#include "../../unmapped/WorldTemplateManager"
#include "../../unmapped/PackManifestFactory"


class WorldTemplatePackSource : DirectoryPackSource {

public:
    virtual WorldTemplatePackSource::~WorldTemplatePackSource()
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin);
    void getWorldTemplateId()const;
};
