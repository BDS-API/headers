#pragma once

#include "../bedrock/util/BlockPos.h"


class StructureTelemetryServerData {

public:

    StructureTelemetryServerData();
    void setHasBeenActivedByRedstone();
    bool hasBeenActivatedByRedstone();
    void setHasLoadedIntoUnloadedChunks(BlockPos const&);
    bool hasBeenLoadedIntoUnloadedChunks(BlockPos const&);
};
