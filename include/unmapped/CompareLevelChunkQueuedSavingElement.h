#pragma once

#include "../bedrock/level/LevelChunkQueuedSavingElement.h"


namespace Level {

class CompareLevelChunkQueuedSavingElement {

public:

    void operator()(Level::LevelChunkQueuedSavingElement const&, Level::LevelChunkQueuedSavingElement const&);
};

}