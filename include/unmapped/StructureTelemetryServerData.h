#pragma once



class StructureTelemetryServerData {

public:
    bool hasBeenActivatedByRedstone();
    StructureTelemetryServerData();
    void setHasLoadedIntoUnloadedChunks(BlockPos const&);
    bool hasBeenLoadedIntoUnloadedChunks(BlockPos const&);
    void setHasBeenActivedByRedstone();
};
