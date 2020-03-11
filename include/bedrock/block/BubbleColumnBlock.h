#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include <memory>
#include "../util/BlockPos.h"
#include <vector>
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class BubbleColumnBlock : BlockLegacy {

public:
    virtual ~BubbleColumnBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool canContainLiquid()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPick()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    BubbleColumnBlock(std::string const&, int);
    void createParticles(BlockSource &, BlockPos const&, Random &, bool);
    void addBubbleColumnSegment(BlockSource &, BlockPos const&);
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&, Block const&);
    void getFlowDownward(Block const&);
    void getTickDelay(BlockSource &)const;
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&);
};
