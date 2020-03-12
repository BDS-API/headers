#pragma once

#include <string>
#include "DirectoryPackSource.h"


class WorldTemplatePackSource : DirectoryPackSource {

public:
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    ~WorldTemplatePackSource();
    std::string _getFolderPathForPackType()const;
//  WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition
    void getWorldTemplateId()const;
};
