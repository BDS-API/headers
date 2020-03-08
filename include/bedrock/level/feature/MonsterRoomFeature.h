#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Random"


class MonsterRoomFeature : Feature {

public:
    virtual MonsterRoomFeature::~MonsterRoomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MonsterRoomFeature(void);
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    void _getRandomEntityId(Random &)const;
};
