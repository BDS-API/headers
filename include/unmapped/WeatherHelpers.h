#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/LevelChunk.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class WeatherHelpers {

public:

    void shouldSnow(BlockSource &, BlockPos const&);
    void shouldFreeze(BlockSource &, BlockPos const&, bool);
    void getTopRainBlockPos(LevelChunk *, BlockPos const&);
    void getTopSnowBlockPos(BlockSource &, BlockPos const&);
};
