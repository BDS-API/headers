#pragma once

#include "../bedrock/level/LevelData"


class BaseGameVersioning {

public:
    static long REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;


    void upgradeBaseGameVersionFromWorldTemplate(WorldTemplateManager const&, LevelData &);
    void getAvailableResourcePackBaseGameVersions();
    void getAvailableBehaviorPackBaseGameVersions();
};
