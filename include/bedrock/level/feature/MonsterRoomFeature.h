#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class MonsterRoomFeature : Feature {

public:
    virtual MonsterRoomFeature::~MonsterRoomFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MonsterRoomFeature(void);
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    void _getRandomEntityId(Random &)const;
};
