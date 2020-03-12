#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>
#include <functional>


class StairBlock : BlockLegacy {

public:
    static long DEAD_SPACES;

    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~StairBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool canBeSilkTouched()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isStairBlock()const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    virtual void mayPick()const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    bool isLockAttached(BlockSource &, BlockPos const&, Block const&)const;
    void _neighboringBlockCheckForCreatingBarrierInDirection(std::function<Block const& (BlockPos const&)> const&, BlockPos const&, Block const&, int)const;
    void setInnerPieceShape(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    void shapeZFightShrink(AABB &)const;
    StairBlock(std::string const&, int, BlockLegacy const&, int);
    void setBaseShape(Block const&, AABB &, bool)const;
    void setStepShape(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
};
