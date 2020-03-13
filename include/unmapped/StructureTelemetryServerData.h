#pragma once



class StructureTelemetryServerData {

public:
    StructureTelemetryServerData(); // _ZN28StructureTelemetryServerDataC2Ev
    void setHasBeenActivedByRedstone(); // _ZN28StructureTelemetryServerData27setHasBeenActivedByRedstoneEv
    bool hasBeenActivatedByRedstone(); // _ZN28StructureTelemetryServerData26hasBeenActivatedByRedstoneEv
    void setHasLoadedIntoUnloadedChunks(BlockPos const&); // _ZN28StructureTelemetryServerData30setHasLoadedIntoUnloadedChunksERK8BlockPos
    bool hasBeenLoadedIntoUnloadedChunks(BlockPos const&); // _ZN28StructureTelemetryServerData31hasBeenLoadedIntoUnloadedChunksERK8BlockPos
};
