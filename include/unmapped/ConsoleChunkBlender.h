#pragma once



class ConsoleChunkBlender {

public:
    static long sConversionBlendNoise;

    ConsoleChunkBlender(); // _ZN19ConsoleChunkBlenderC2Ev
    ~ConsoleChunkBlender(); // _ZN19ConsoleChunkBlenderD2Ev
    void setInterpolants(int, int, int, int); // _ZN19ConsoleChunkBlender15setInterpolantsEiiii
    void blendChunkOverworld(LevelChunk &, LevelChunk &); // _ZN19ConsoleChunkBlender19blendChunkOverworldER10LevelChunkS1_
    void _prepInterpTable(); // _ZN19ConsoleChunkBlender16_prepInterpTableEv
    void _findHighestStoneOrBedrockHeight(LevelChunk &, int, int); // _ZN19ConsoleChunkBlender32_findHighestStoneOrBedrockHeightER10LevelChunkii
    void _findTopMostWaterHeight(LevelChunk &, int, int); // _ZN19ConsoleChunkBlender23_findTopMostWaterHeightER10LevelChunkii
    void _calcAlphaOverworld(float, float); // _ZN19ConsoleChunkBlender19_calcAlphaOverworldEff
    void _shiftColumnBySetBlocks(LevelChunk &, int, int, int, int); // _ZN19ConsoleChunkBlender23_shiftColumnBySetBlocksER10LevelChunkiiii
    void _copyColumnFromGenerated(LevelChunk &, LevelChunk &, int, int); // _ZN19ConsoleChunkBlender24_copyColumnFromGeneratedER10LevelChunkS1_ii
    void blendChunkNether(LevelChunk &, LevelChunk &); // _ZN19ConsoleChunkBlender16blendChunkNetherER10LevelChunkS1_
    void blendChunkEnd(LevelChunk &, LevelChunk &); // _ZN19ConsoleChunkBlender13blendChunkEndER10LevelChunkS1_
};
