#pragma once

#include "../bedrock/util/Brightness.h"


class RuntimeLightingManager {

public:
    class RuntimeLightingSubchunkList;

    ~RuntimeLightingManager(); // _ZN22RuntimeLightingManagerD2Ev
    RuntimeLightingManager(Dimension &); // _ZN22RuntimeLightingManagerC2ER9Dimension
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool); // _ZN22RuntimeLightingManager16updateBlockLightERK8BlockPos10BrightnessS3_S3_S3_b
    void _checkForRelightingTask(); // _ZN22RuntimeLightingManager23_checkForRelightingTaskEv
    void _getListOfChunksWithPlayerDistance(); // _ZN22RuntimeLightingManager34_getListOfChunksWithPlayerDistanceEv
    void _sortChunksToProcessByDistance(); // _ZN22RuntimeLightingManager30_sortChunksToProcessByDistanceEv
    void _relightChunks(); // _ZN22RuntimeLightingManager14_relightChunksEv
    void _removeProcessedSubchunks(); // _ZN22RuntimeLightingManager25_removeProcessedSubchunksEv
    class RuntimeLightingSubchunkList {

    public:
        ~RuntimeLightingSubchunkList(); // _ZN22RuntimeLightingManager27RuntimeLightingSubchunkListD2Ev
        RuntimeLightingSubchunkList(); // _ZN22RuntimeLightingManager27RuntimeLightingSubchunkListC2Ev
        RuntimeLightingSubchunkList(RuntimeLightingManager::RuntimeLightingSubchunkList &&); // _ZN22RuntimeLightingManager27RuntimeLightingSubchunkListC2EOS0_
    };
};
