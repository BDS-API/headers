#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class SoulSandBlock : BlockLegacy {

public:
    virtual ~SoulSandBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;

    SoulSandBlock(std::string const&, int);
    void _tryAddBubbleColumnSegment(BlockSource &, BlockPos const&)const;
};
