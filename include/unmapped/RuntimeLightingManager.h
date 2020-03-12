#pragma once

#include "../bedrock/util/Brightness.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"


class RuntimeLightingManager {

public:
    class RuntimeLightingSubchunkList;

    void _sortChunksToProcessByDistance();
    void _checkForRelightingTask();
    RuntimeLightingManager(Dimension &);
    ~RuntimeLightingManager();
    void _relightChunks();
    void _removeProcessedSubchunks();
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void _getListOfChunksWithPlayerDistance();
    class RuntimeLightingSubchunkList {

    public:
        RuntimeLightingSubchunkList(RuntimeLightingManager::RuntimeLightingSubchunkList &&);
        RuntimeLightingSubchunkList();
        ~RuntimeLightingSubchunkList();
    };
};
