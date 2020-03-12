#pragma once

#include "DirectoryPackSource.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../mce/UUID.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/WorldTemplateManager.h"


class WorldTemplatePackSource : DirectoryPackSource {

public:
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    ~WorldTemplatePackSource();
//  WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition
    std::string _getFolderPathForPackType()const;
    void getWorldTemplateId()const;
};
