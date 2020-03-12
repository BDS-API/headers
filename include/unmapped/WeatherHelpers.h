#pragma once



namespace WeatherHelpers {

    void shouldSnow(BlockSource &, BlockPos const&);
    void getTopRainBlockPos(LevelChunk *, BlockPos const&);
    void getTopSnowBlockPos(BlockSource &, BlockPos const&);
    void shouldFreeze(BlockSource &, BlockPos const&, bool);
};
