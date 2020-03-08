#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Brightness"


class RuntimeLightingManager {

public:

    RuntimeLightingManager(Dimension &);
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void _checkForRelightingTask();
    void _getListOfChunksWithPlayerDistance();
    void _sortChunksToProcessByDistance();
    void _relightChunks();
    void _removeProcessedSubchunks();
};
