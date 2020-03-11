#pragma once

#include "./PackManifest.h"
#include "./WorldTemplatePackManifest.h"


class WorldTemplatePackManifest : PackManifest {

public:
    virtual ~WorldTemplatePackManifest();
    virtual void clone()const;

    WorldTemplatePackManifest();
    WorldTemplatePackManifest(PackManifest &&);
//  void setGameType(GameType); //TODO: incomplete function definition
    void getGameType()const;
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);
};
