#pragma once

#include "../bedrock/util/Brightness.h"


class RuntimeLightingManager {

public:
    class RuntimeLightingSubchunkList;

    ~RuntimeLightingManager();
    void _relightChunks();
    void _removeProcessedSubchunks();
    void _getListOfChunksWithPlayerDistance();
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void _checkForRelightingTask();
    void _sortChunksToProcessByDistance();
    RuntimeLightingManager(Dimension &);
    class RuntimeLightingSubchunkList {

    public:
        RuntimeLightingSubchunkList();
        RuntimeLightingSubchunkList(RuntimeLightingManager::RuntimeLightingSubchunkList &&);
        ~RuntimeLightingSubchunkList();
    };
};
