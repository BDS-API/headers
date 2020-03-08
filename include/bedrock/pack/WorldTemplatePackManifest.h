#pragma once



class WorldTemplatePackManifest : PackManifest {

public:
    WorldTemplatePackManifest::~WorldTemplatePackManifest()
    virtual void clone()const;

    WorldTemplatePackManifest(void);
    WorldTemplatePackManifest(PackManifest &&);
    void setGameType(GameType);
    void getGameType()const;
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);
};
