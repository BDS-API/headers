#pragma once

#include "./LevelChunk.h"


class LevelChunkFinalDeleter {

public:

    void operator()(LevelChunk *);
};
