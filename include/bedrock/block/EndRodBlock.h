#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "BlockLegacy.h"
#include "../util/Random.h"


class EndRodBlock : BlockLegacy {

public:
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    ~EndRodBlock();
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    bool canStandOn(BlockSource &, BlockPos const&)const;
    void _shouldMirror(unsigned char, unsigned char)const;
    void _mirror(unsigned char)const;
    void _shapeFromDirection(Vec3 &, Vec3 &, int)const;
    EndRodBlock(std::string const&, int);
};
