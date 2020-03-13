#pragma once

#include <string>
#include "DirectoryPackSource.h"


class WorldTemplatePackSource : DirectoryPackSource {

public:
    ~WorldTemplatePackSource(); // _ZN23WorldTemplatePackSourceD2Ev
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN23WorldTemplatePackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//  WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition // _ZN23WorldTemplatePackSourceC2ERK20WorldTemplateManagerRKN3mce4UUIDE8PackType10PackOrigin
    std::string _getFolderPathForPackType()const; // _ZNK23WorldTemplatePackSource25_getFolderPathForPackTypeB5cxx11Ev
    void getWorldTemplateId()const; // _ZNK23WorldTemplatePackSource18getWorldTemplateIdEv
};
