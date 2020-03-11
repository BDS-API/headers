#pragma once

#include "./LevelChunk.h"


class LevelChunkPhase1Deleter {

public:

    void operator()(LevelChunk *);
};
