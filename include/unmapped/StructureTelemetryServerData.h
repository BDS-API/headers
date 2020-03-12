#pragma once

#include "../bedrock/util/BlockPos.h"


class StructureTelemetryServerData {

public:
    void setHasBeenActivedByRedstone();
    bool hasBeenActivatedByRedstone();
    StructureTelemetryServerData();
    void setHasLoadedIntoUnloadedChunks(BlockPos const&);
    bool hasBeenLoadedIntoUnloadedChunks(BlockPos const&);
};
