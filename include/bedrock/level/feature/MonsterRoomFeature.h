#pragma once

#include "Feature.h"


class MonsterRoomFeature : Feature {

public:
    ~MonsterRoomFeature(); // _ZN18MonsterRoomFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK18MonsterRoomFeature5placeER11BlockSourceRK8BlockPosR6Random
    MonsterRoomFeature(); // _ZN18MonsterRoomFeatureC2Ev
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const; // _ZNK18MonsterRoomFeature16_getFacingDataIdER11BlockSourceRK8BlockPosii
    void _getRandomEntityId(Random &)const; // _ZNK18MonsterRoomFeature18_getRandomEntityIdER6Random
};
