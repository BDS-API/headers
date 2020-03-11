#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include <memory>
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include <vector>
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class EndRodBlock : BlockLegacy {

public:
    virtual ~EndRodBlock();
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
