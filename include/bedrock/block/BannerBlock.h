#pragma once

#include "../../unmapped/AABB"
#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../../unmapped/Random"
#include "actor/BannerBlockActor"


class BannerBlock : ActorBlock {

public:
    static long STANDING_AABB;
    static long NORTH_AABB;
    static long SOUTH_AABB;
    static long EAST_AABB;
    static long WEST_AABB;

    virtual BannerBlock::~BannerBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    BannerBlock(std::string const&, int, bool);
    void getShape(int, AABB &)const;
    void _itemInstanceFromBlockEntity(BannerBlockActor const*)const;
};
