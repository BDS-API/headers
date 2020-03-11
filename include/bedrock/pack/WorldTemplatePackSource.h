#pragma once

#include "../../mce/UUID.h"
#include "../../unmapped/WorldTemplateManager.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackManifestFactory.h"
#include "./DirectoryPackSource.h"
#include <string>


class WorldTemplatePackSource : DirectoryPackSource {

public:
    virtual ~WorldTemplatePackSource();
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

//  WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition
    std::string _getFolderPathForPackType()const;
    void getWorldTemplateId()const;
};
