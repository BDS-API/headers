#pragma once



class ConsoleChunkBlender {

public:
    static long sConversionBlendNoise;

    void _copyColumnFromGenerated(LevelChunk &, LevelChunk &, int, int);
    ~ConsoleChunkBlender();
    void _calcAlphaOverworld(float, float);
    void _findTopMostWaterHeight(LevelChunk &, int, int);
    void blendChunkEnd(LevelChunk &, LevelChunk &);
    void _findHighestStoneOrBedrockHeight(LevelChunk &, int, int);
    void blendChunkNether(LevelChunk &, LevelChunk &);
    void _shiftColumnBySetBlocks(LevelChunk &, int, int, int, int);
    void setInterpolants(int, int, int, int);
    void _prepInterpTable();
    ConsoleChunkBlender();
    void blendChunkOverworld(LevelChunk &, LevelChunk &);
};
