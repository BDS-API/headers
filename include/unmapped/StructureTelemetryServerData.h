#pragma once

#include "../bedrock/util/BlockPos"


class StructureTelemetryServerData {

public:

    StructureTelemetryServerData(void);
    void setHasBeenActivedByRedstone();
    bool hasBeenActivatedByRedstone();
    void setHasLoadedIntoUnloadedChunks(BlockPos const&);
    bool hasBeenLoadedIntoUnloadedChunks(BlockPos const&);
};
