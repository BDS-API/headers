#pragma once

using namespace Level;

class CompareLevelChunkQueuedSavingElement {

public:

    void operator()(Level::LevelChunkQueuedSavingElement const&, Level::LevelChunkQueuedSavingElement const&);
};
