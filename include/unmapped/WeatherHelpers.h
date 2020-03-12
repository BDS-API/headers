#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/level/LevelChunk.h"
#include "../bedrock/util/BlockPos.h"


namespace WeatherHelpers {

    void getTopSnowBlockPos(BlockSource &, BlockPos const&);
    void getTopRainBlockPos(LevelChunk *, BlockPos const&);
    void shouldSnow(BlockSource &, BlockPos const&);
    void shouldFreeze(BlockSource &, BlockPos const&, bool);
};
