#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class BubbleColumnBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    ~BubbleColumnBlock();
    virtual void mayPick()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid()const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&);
    void getTickDelay(BlockSource &)const;
    BubbleColumnBlock(std::string const&, int);
    void createParticles(BlockSource &, BlockPos const&, Random &, bool);
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&, Block const&);
    void addBubbleColumnSegment(BlockSource &, BlockPos const&);
    void getFlowDownward(Block const&);
};
