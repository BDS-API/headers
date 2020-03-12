#pragma once

#include "../core/Path.h"
#include "../bedrock/level/LevelData.h"


namespace ExternalFileLevelStorageMetadata {

    void saveLevelMetadata(Core::Path const&, LevelData const&);
};
