#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class MonsterRoomFeature : Feature {

public:
    MonsterRoomFeature::~MonsterRoomFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MonsterRoomFeature(void);
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    void _getRandomEntityId(Random &)const;
};
