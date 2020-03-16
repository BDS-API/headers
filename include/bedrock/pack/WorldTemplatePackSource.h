#pragma once

#include "DirectoryPackSource.h"
#include <string>


class WorldTemplatePackSource : public DirectoryPackSource {

public:
    virtual ~WorldTemplatePackSource(); // _ZN23WorldTemplatePackSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN23WorldTemplatePackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//    WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, long, long); //TODO: incomplete function definition // _ZN23WorldTemplatePackSourceC2ERK20WorldTemplateManagerRKN3mce4UUIDE8PackType10PackOrigin
    std::string _getFolderPathForPackType()const; // _ZNK23WorldTemplatePackSource25_getFolderPathForPackTypeB5cxx11Ev
    void getWorldTemplateId()const; // _ZNK23WorldTemplatePackSource18getWorldTemplateIdEv
};
