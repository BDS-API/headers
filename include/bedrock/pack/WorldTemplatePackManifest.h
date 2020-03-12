#pragma once

#include "PackManifest.h"


class WorldTemplatePackManifest : PackManifest {

public:
    virtual void clone()const;
    ~WorldTemplatePackManifest();
    WorldTemplatePackManifest(PackManifest &&);
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);
//  void setGameType(GameType); //TODO: incomplete function definition
    void getGameType()const;
    WorldTemplatePackManifest();
};
