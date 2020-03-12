#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "BlockLegacy.h"
#include "../util/Random.h"


class BubbleColumnBlock : BlockLegacy {

public:
    virtual void mayPick()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~BubbleColumnBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&);
    void createParticles(BlockSource &, BlockPos const&, Random &, bool);
    void getFlowDownward(Block const&);
    void addBubbleColumnSegment(BlockSource &, BlockPos const&);
    BubbleColumnBlock(std::string const&, int);
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&, Block const&);
    void getTickDelay(BlockSource &)const;
};
