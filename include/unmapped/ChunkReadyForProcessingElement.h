#pragma once

#include "../bedrock/util/ChunkPos.h"


namespace LevelChunkBuilderData {

class ChunkReadyForProcessingElement {

public:

    ChunkReadyForProcessingElement(ChunkPos const&, int);
};

}