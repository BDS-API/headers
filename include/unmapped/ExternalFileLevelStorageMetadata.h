#pragma once

#include "../core/Path"
#include "../bedrock/level/LevelData"


class ExternalFileLevelStorageMetadata {

public:

    void saveLevelMetadata(Core::Path const&, LevelData const&);
};
