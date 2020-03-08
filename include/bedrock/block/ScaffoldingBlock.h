#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "../util/AABB"


class ScaffoldingBlock : HeavyBlock {

public:
    static long MAX_STABILITY;

    virtual ScaffoldingBlock::~ScaffoldingBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSlide(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName(Block const&)const;

    ScaffoldingBlock(std::string const&, int);
    void _updateBlockStability(BlockSource &, BlockPos const&)const;
    void _isAboveSupportingBlock(BlockSource const&, BlockPos const&)const;
    void calculateStability(BlockSource const&, BlockPos const&)const;
};
