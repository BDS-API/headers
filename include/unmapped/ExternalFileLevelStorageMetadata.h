#pragma once

#include "../bedrock/level/LevelData"
#include "../core/Path"


class ExternalFileLevelStorageMetadata {

public:

    void saveLevelMetadata(Core::Path const&, LevelData const&);
};
