#pragma once

class WorldTemplatePackManifest : PackManifest {

public:
    virtual WorldTemplatePackManifest::~WorldTemplatePackManifest();
    virtual void clone(void)const;

    WorldTemplatePackManifest(void);
    WorldTemplatePackManifest(PackManifest &&);
    void setGameType(GameType);
    void getGameType(void)const;
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);
};
