#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "actor/BlockActor.h"
#include "actor/BannerBlockActor.h"
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class BannerBlock : ActorBlock {

public:
    static long STANDING_AABB;
    static long NORTH_AABB;
    static long SOUTH_AABB;
    static long EAST_AABB;
    static long WEST_AABB;

    virtual ~BannerBlock();
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
