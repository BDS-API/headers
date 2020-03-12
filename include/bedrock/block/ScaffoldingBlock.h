#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "HeavyBlock.h"


class ScaffoldingBlock : HeavyBlock {

public:
    static long MAX_STABILITY;

    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    ~ScaffoldingBlock();
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getDustColor(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canSlide(BlockSource &, BlockPos const&)const;
    virtual bool isWaterBlocking()const;
    ScaffoldingBlock(std::string const&, int);
    void _isAboveSupportingBlock(BlockSource const&, BlockPos const&)const;
    void calculateStability(BlockSource const&, BlockPos const&)const;
    void _updateBlockStability(BlockSource &, BlockPos const&)const;
};
