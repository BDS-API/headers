#pragma once

#include "PackManifest.h"


class WorldTemplatePackManifest : PackManifest {

public:
    ~WorldTemplatePackManifest();
    virtual void clone()const;
//  void setGameType(GameType); //TODO: incomplete function definition
    WorldTemplatePackManifest(PackManifest &&);
    void getGameType()const;
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);
    WorldTemplatePackManifest();
};
