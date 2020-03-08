#pragma once

#include "../bedrock/level/LevelChunk"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class WeatherHelpers {

public:

    void shouldSnow(BlockSource &, BlockPos const&);
    void shouldFreeze(BlockSource &, BlockPos const&, bool);
    void getTopRainBlockPos(LevelChunk *, BlockPos const&);
    void getTopSnowBlockPos(BlockSource &, BlockPos const&);
};
