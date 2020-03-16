#pragma once



namespace WeatherHelpers {

    bool shouldSnow(BlockSource &, BlockPos const&); // _ZN14WeatherHelpers10shouldSnowER11BlockSourceRK8BlockPos
    bool shouldFreeze(BlockSource &, BlockPos const&, bool); // _ZN14WeatherHelpers12shouldFreezeER11BlockSourceRK8BlockPosb
    void getTopRainBlockPos(LevelChunk *, BlockPos const&); // _ZN14WeatherHelpers18getTopRainBlockPosEP10LevelChunkRK8BlockPos
    void getTopSnowBlockPos(BlockSource &, BlockPos const&); // _ZN14WeatherHelpers18getTopSnowBlockPosER11BlockSourceRK8BlockPos
};
