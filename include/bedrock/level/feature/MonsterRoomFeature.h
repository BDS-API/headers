#pragma once

#include "Feature.h"


class MonsterRoomFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~MonsterRoomFeature();
    MonsterRoomFeature();
    void _getRandomEntityId(Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
};
