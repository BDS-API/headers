#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class MonsterRoomFeature : Feature {

public:
    virtual ~MonsterRoomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MonsterRoomFeature();
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    void _getRandomEntityId(Random &)const;
};
