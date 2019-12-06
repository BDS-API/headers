#pragma once

class StructureTelemetryServerData {

public:

    void StructureTelemetryServerData(void);
    void setHasBeenActivedByRedstone(void);
    bool hasBeenActivatedByRedstone(void);
    void setHasLoadedIntoUnloadedChunks(BlockPos const&);
    bool hasBeenLoadedIntoUnloadedChunks(BlockPos const&);
};
