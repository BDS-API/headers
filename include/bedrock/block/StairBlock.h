#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include <functional>
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class StairBlock : BlockLegacy {

public:
    static long DEAD_SPACES;

    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void mayPick()const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual bool isStairBlock()const;
    ~StairBlock();
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    bool isLockAttached(BlockSource &, BlockPos const&, Block const&)const;
    void shapeZFightShrink(AABB &)const;
    void _neighboringBlockCheckForCreatingBarrierInDirection(std::function<Block const& (BlockPos const&)> const&, BlockPos const&, Block const&, int)const;
    StairBlock(std::string const&, int, BlockLegacy const&, int);
    void setInnerPieceShape(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    void setStepShape(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    void setBaseShape(Block const&, AABB &, bool)const;
};
