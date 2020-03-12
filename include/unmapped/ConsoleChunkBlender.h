#pragma once

#include "../bedrock/level/LevelChunk.h"


class ConsoleChunkBlender {

public:
    static long sConversionBlendNoise;

    void _prepInterpTable();
    void _calcAlphaOverworld(float, float);
    void _copyColumnFromGenerated(LevelChunk &, LevelChunk &, int, int);
    void _findHighestStoneOrBedrockHeight(LevelChunk &, int, int);
    void _findTopMostWaterHeight(LevelChunk &, int, int);
    ConsoleChunkBlender();
    void setInterpolants(int, int, int, int);
    void blendChunkEnd(LevelChunk &, LevelChunk &);
    void _shiftColumnBySetBlocks(LevelChunk &, int, int, int, int);
    ~ConsoleChunkBlender();
    void blendChunkNether(LevelChunk &, LevelChunk &);
    void blendChunkOverworld(LevelChunk &, LevelChunk &);
};
