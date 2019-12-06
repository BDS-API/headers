#pragma once

class WorldTemplatePackManifest : PackManifest {

public:
    virtual ~WorldTemplatePackManifest();
    virtual void clone(void)const;

    void WorldTemplatePackManifest(void);
    void WorldTemplatePackManifest(PackManifest &&);
    void setGameType(GameType);
    void getGameType(void)const;
    void WorldTemplatePackManifest(WorldTemplatePackManifest const&);
};
