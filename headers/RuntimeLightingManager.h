#pragma once

class RuntimeLightingManager {

public:

    void RuntimeLightingManager(Dimension &);
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void _checkForRelightingTask(void);
    void _getListOfChunksWithPlayerDistance(void);
    void _sortChunksToProcessByDistance(void);
    void _relightChunks(void);
    void _removeProcessedSubchunks(void);
};
