#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "../util/AABB"


class EndRodBlock : BlockLegacy {

public:
    virtual EndRodBlock::~EndRodBlock()
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    EndRodBlock(std::string const&, int);
    void _shouldMirror(unsigned char, unsigned char)const;
    void _mirror(unsigned char)const;
    void _shapeFromDirection(Vec3 &, Vec3 &, int)const;
    bool canStandOn(BlockSource &, BlockPos const&)const;
};
