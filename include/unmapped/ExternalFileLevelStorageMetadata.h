#pragma once

#include "../core/Path"


class ExternalFileLevelStorageMetadata {

public:

    void saveLevelMetadata(Core::Path const&, LevelData const&);
};
