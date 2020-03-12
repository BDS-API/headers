#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class MonsterRoomFeature : Feature {

public:
    ~MonsterRoomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _getRandomEntityId(Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    MonsterRoomFeature();
};
