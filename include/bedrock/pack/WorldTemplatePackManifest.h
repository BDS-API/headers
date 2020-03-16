#pragma once

#include "PackManifest.h"


class WorldTemplatePackManifest : public PackManifest {

public:
    virtual ~WorldTemplatePackManifest(); // _ZN25WorldTemplatePackManifestD2Ev
    virtual void __fake_function0(); // fake
    virtual void clone()const; // _ZNK25WorldTemplatePackManifest5cloneEv
    WorldTemplatePackManifest(); // _ZN25WorldTemplatePackManifestC2Ev
    WorldTemplatePackManifest(PackManifest &&); // _ZN25WorldTemplatePackManifestC2EO12PackManifest
//    void setGameType(long); //TODO: incomplete function definition // _ZN25WorldTemplatePackManifest11setGameTypeE8GameType
    void getGameType()const; // _ZNK25WorldTemplatePackManifest11getGameTypeEv
    WorldTemplatePackManifest(WorldTemplatePackManifest const&); // _ZN25WorldTemplatePackManifestC2ERKS_
};
