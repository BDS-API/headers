#pragma once

class MonsterRoomFeature : Feature {

    virtual ~MonsterRoomFeature();
    virtual ~MonsterRoomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
