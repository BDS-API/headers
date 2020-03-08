#pragma once

#include "../../mce/UUID"
#include "../../unmapped/IContentKeyProvider"
#include "../../unmapped/PackManifestFactory"
#include "../../unmapped/WorldTemplateManager"


class WorldTemplatePackSource : DirectoryPackSource {

public:
    WorldTemplatePackSource::~WorldTemplatePackSource()
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin);
    void getWorldTemplateId()const;
};
