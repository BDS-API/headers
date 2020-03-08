#pragma once

#include "../bedrock/util/Brightness"
#include "../bedrock/util/BlockPos"


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
