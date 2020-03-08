#pragma once

#include "../bedrock/level/LevelChunk"


class WeatherHelpers {

public:

    void shouldSnow(BlockSource &, BlockPos const&);
    void shouldFreeze(BlockSource &, BlockPos const&, bool);
    void getTopRainBlockPos(LevelChunk *, BlockPos const&);
    void getTopSnowBlockPos(BlockSource &, BlockPos const&);
};
