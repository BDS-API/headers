#pragma once

#include <string>
#include "ActorBlock.h"


class BannerBlock : ActorBlock {

public:
    static long STANDING_AABB;
    static long NORTH_AABB;
    static long SOUTH_AABB;
    static long EAST_AABB;
    static long WEST_AABB;

    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    ~BannerBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    void getShape(int, AABB &)const;
    BannerBlock(std::string const&, int, bool);
    void _itemInstanceFromBlockEntity(BannerBlockActor const*)const;
};
