#pragma once

#include "../bedrock/level/LevelChunk"


class ConsoleChunkBlender {

public:
    static long sConversionBlendNoise;


    ConsoleChunkBlender(void);
    void setInterpolants(int, int, int, int);
    void blendChunkOverworld(LevelChunk &, LevelChunk &);
    void _prepInterpTable();
    void _findHighestStoneOrBedrockHeight(LevelChunk &, int, int);
    void _findTopMostWaterHeight(LevelChunk &, int, int);
    void _calcAlphaOverworld(float, float);
    void _shiftColumnBySetBlocks(LevelChunk &, int, int, int, int);
    void _copyColumnFromGenerated(LevelChunk &, LevelChunk &, int, int);
    void blendChunkNether(LevelChunk &, LevelChunk &);
    void blendChunkEnd(LevelChunk &, LevelChunk &);
};
