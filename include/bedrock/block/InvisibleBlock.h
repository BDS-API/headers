#pragma once

#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../util/Vec3"


class InvisibleBlock : BlockLegacy {

public:
    virtual InvisibleBlock::~InvisibleBlock()
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;

    InvisibleBlock(std::string const&, int, Material const&);
};
