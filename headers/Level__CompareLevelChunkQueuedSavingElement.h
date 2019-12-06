#pragma once

class Level::CompareLevelChunkQueuedSavingElement {

public:

    void operator()(Level::LevelChunkQueuedSavingElement const&, Level::LevelChunkQueuedSavingElement const&);
};
