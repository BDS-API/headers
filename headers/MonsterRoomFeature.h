#pragma once

class MonsterRoomFeature : Feature {

public:
    virtual ~MonsterRoomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void MonsterRoomFeature(void);
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
    void _getRandomEntityId(Random &)const;
};
