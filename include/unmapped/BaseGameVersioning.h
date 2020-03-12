#pragma once

#include "WorldTemplateManager.h"
#include "../bedrock/level/LevelData.h"


namespace BaseGameVersioning {

    static long REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;

    void upgradeBaseGameVersionFromWorldTemplate(WorldTemplateManager const&, LevelData &);
    void getAvailableBehaviorPackBaseGameVersions();
    void getAvailableResourcePackBaseGameVersions();
};
