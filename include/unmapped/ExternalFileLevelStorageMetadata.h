#pragma once

#include "../core/Path.h"
#include "../bedrock/level/LevelData.h"


class ExternalFileLevelStorageMetadata {

public:

    void saveLevelMetadata(Core::Path const&, LevelData const&);
};
