#pragma once

#include "../bedrock/util/Brightness.h"
#include "./Dimension.h"
#include "../bedrock/util/BlockPos.h"


class RuntimeLightingManager {

public:

    ~RuntimeLightingManager();
    RuntimeLightingManager(Dimension &);
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void _checkForRelightingTask();
    void _getListOfChunksWithPlayerDistance();
    void _sortChunksToProcessByDistance();
    void _relightChunks();
    void _removeProcessedSubchunks();
};
